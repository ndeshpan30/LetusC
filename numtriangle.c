#include<stdio.h>
int main()
{
  int n,k=1,x,j,i,p;
  
  for(j=1;j<=4;j++)
    {
    p=4-j;
    
      for(x=p;x>0;x--)
	{
	  printf(" ");
	}
      for(i=1;i<=j;i++)
	{
	  printf("%d ",k);
	  k++;	  
	}
      printf(" \n");

   
    }
 return 0;
}
