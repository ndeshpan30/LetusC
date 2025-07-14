#include<stdio.h>
int factor(int,int);
int main()
{
  int x,i=2;
  printf("Enter a number: ");
  scanf("%d",&x);
  factor(x,i);
}

int factor(int x,int i)
{
  
  
  if(x%i==0)
	{
	printf("%d",i);
      x=x/i;
      factor(x,i);
	} 
  else if(x==1)
    return 1;
  else
	i++;
  factor(x,i);
}

