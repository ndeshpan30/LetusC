#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

struct node
{
  char word[50];
  char meaning[250];
  struct node *left;
  struct node *right;
};

struct node* createdictionary(struct node* node);
struct node* addnode(char word[] , char meaning[]);
struct node* insertnode(char word[] , char meaning[],struct node *node);
void search(struct node* node,char *word);
void printtree(struct node* node);
struct node *insertintodictionary(char **filearrayptr,struct node *node,int low,int high);
void sortarray(char **filearrayptr,int n);
char** createfilearray(int n,FILE *fp);
int numberoflines(FILE *fp);

struct node* createdictionary(struct node* node)
{
  char *token,currmeaning[250],currword[50];
  char line[250];
  FILE * fp = NULL; 
  const char *filename = "dict.txt";
  fp = fopen(filename,"r");
  if (fp == NULL)
    {
      printf("Error opening file for reading!\n");
    }  
  int n=numberoflines(fp);

  rewind(fp);
  char **filearrayptr= createfilearray(n,fp);

  sortarray(filearrayptr,n);
  node=insertintodictionary(filearrayptr,node,0,n-1);
  

fclose(fp);
return node;
}

int main()
{
  struct node* node=NULL;
  struct node* first=NULL;
  node=createdictionary(node);
  printf(GREEN "                                        _______________________________________________________\n" RESET);
  printf("\n");
  printf( BOLD GREEN "                                                       WELCOME TO THE C DICTIONARY\n" RESET);
  printf(GREEN "                                        _______________________________________________________\n" RESET);
  while(1)
    {
      printf("\n");
      printf(CYAN "                                        _______________________________________________________\n" RESET);
      printf("\n");

      printf(CYAN "                                                       DICTIONARY PROGRAM MENU:    \n                                                                                     \n");
      printf("                                                        Enter 1 to search word.      \n                                                        Enter 2 to exit.             \n                                                        Enter 3 to print the tree.   \n" RESET);
      
      printf(CYAN "\n                                                        Enter your choice: " RESET);
      
      int n;
      scanf("%d",&n);
      
      printf(CYAN "                                        _______________________________________________________ \n" RESET);
printf("\n");
      switch(n)
	{
	case 1:
	  char *word;
	  printf(CYAN "                                        _______________________________________________________\n");
	  printf(CYAN "\n");
	  printf(CYAN "                                                    Enter the word you wish to search: ");
	  scanf("%s",word);
	  printf("\n");
	  search(node,word);
	  
	   printf(CYAN "                                        _______________________________________________________\n");

	  
	  break;
	case 2:
	  return 0;
	case 3:
	  printtree(node);
	  break; 
	}
    }
  return 0;
}

struct node* addnode(char word[],char meaning[])
{
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  strcpy(newnode->word,word);
  strcpy(newnode->meaning,meaning);
  newnode->left=NULL;
  newnode->right=NULL;
  return newnode;
}
struct node* insertnode(char word[],char meaning[],struct node *node)
{
  if(node==NULL)
    {
      struct node* newnode =addnode(word,meaning);
      return newnode;
    }
  
  if(node->left==NULL && strcmp(node->word,word)>0)
    {
      node->left=addnode(word,meaning);
      
      return node->left;
    }
  if(node->right==NULL && strcmp(node->word,word)<0)
    {
      node->right=addnode(word,meaning);
      
      return node->right;
    }
  if(node->left!=NULL && node->right!=NULL)
    {
      insertnode(word,meaning,node->left);
      insertnode(word,meaning,node->right);
      return node;
    }
}

void search(struct node* node,char *word)
{
  if(node==NULL)
    {
      printf(BOLD RED "                                                         ERROR : WORD NOT FOUND!\n");
      return;}
  
  if(strcmp(node->word,word)==0)
    {
      printf(YELLOW "                                                   %s:%s\n", node->word , node->meaning );
    }  
  else if(strcmp(node->word,word)>0)
    {
      search(node->left,word);
    }
  else if(strcmp(node->word,word)<0)
    {
      search(node->right,word);
    }  
}

void printtree(struct node* node)
{
  if(node==NULL)
    {return;}
  printtree(node->left);
  printf("%s->\n",node->word);
  printtree(node->right);

}

int numberoflines(FILE *fp)
{
  char line[1024];
  int count;
  while(fgets(line,sizeof(line),fp))
    {
      count++;
    }
  return count;
}

char** createfilearray(int n,FILE *fp)
{
 
  char **dictarray = malloc(n*sizeof(char*));
  for (int i=0;i<n;i++)
    {
      dictarray[i] = malloc(250 * sizeof(char));
    }
  char line[250];
  int i=0;
  while(fgets(line,sizeof(line),fp))
    {
      strcpy(dictarray[i],line);
      i++;
    }
  return dictarray;

}
void sortarray(char** filearrayptr,int n)
{
  int i=0,j=0;
  char *line,*nextline,*temp;
  
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  nextline=filearrayptr[j];
	  if(strcmp(filearrayptr[j],filearrayptr[i])>0)
	    {
	      char *temp=filearrayptr[i];
	      filearrayptr[i]=filearrayptr[j];
	      filearrayptr[j]=temp;
	    }
	}
    }
}
  

struct node *insertintodictionary(char **filearrayptr,struct node *node,int low,int high)
{
  char line[1024],*token,currword[100],currmeaning[250];
  int mid=(low+high)/2;
  strcpy(line,filearrayptr[mid]);
  token = strtok(line, ":");
  
  strcpy(currword, token);

  token = strtok(NULL, ":");
  
  strcpy(currmeaning, token);
  
  

  node = insertnode(currword, currmeaning, node);

  
  if(mid!=low)
    {
      insertintodictionary(filearrayptr,node,low,mid);
    }
  if(mid!=high)
    {
      insertintodictionary(filearrayptr,node,mid+1,high);
    }   
  return node;
}
