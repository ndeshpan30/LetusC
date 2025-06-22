#include<stdio.h>
int main()
{
  int n,k=1,x,j,i,p;
  
  for(j=1;j<=4;j++) //where j is the row number.
    {
    p=4-j;//p is the number of spaces to be printed before the starting number of each row
    
      for(x=p;x>0;x--)//printf spaces
	{
	  printf(" ");
	}
      for(i=1;i<=j;i++)//prints the numbers
	{
	  printf("%d ",k);
	  k++;//increments the value of k so that each time the loop runs, it prints the next number, and not the same one.	  
	}
      printf(" \n");//to move to the next line

   
    }
 return 0;
}
