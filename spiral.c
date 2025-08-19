#include<stdio.h>
int main()
{
  int i=0,j=0,n;
  

  printf("Enter the number of rows and columns in the square matrix: ");
  scanf("%d",&n);
  int s[n][n];
	
	for(i=0;i<=n-1;i++)
    {
      for(j=0;j<=n-1;j++)
	{
	  printf("Enter the elements of row %d, column %d: ",i,j);
	  scanf("%d",&s[i][j]);

	}
      
    }
  printf("The matrix looks like this: \n");
  for(i=0;i<=n-1;i++)
    {
      for(j=0;j<=n-1;j++)
	{
	  printf(" %d ",s[i][j]);

	}
      printf("\n");
    }




  printf("Spiral form: ");
  
  int top=0;
  int bottom=n-1;
  int left=0;
  int right=n-1;

  while(left<=right &&top<=bottom)
    {
  for(j=left;j<=right;j++)
    {
      printf("%d ",s[top][j]);
    }
  top=top+1;
  for(i=top;i<=bottom;i++)
    {
      printf("%d ",s[i][right]);
    }
  right=right-1;
  for(j=right;j>=left;j--)
    {
      printf("%d ",s[bottom][j]);
    }
  bottom=bottom-1;
  for(i=bottom;i>=top;i--)
    {
      printf("%d ",s[i][left]);
    }
  left=left+1;
    }
  return 0;
}
