#include<stdio.h>
int main()
{
  int num[5],i,j,temp;
  printf("Enter the elements of the array");
  scanf("%d,%d,%d,%d,%d",&num[0],&num[1],&num[2],&num[3],&num[4]);
  printf("unsorted array: %d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4]);

  for(i=0;i<=4;i++)
    {
  for(j=0;j<=3;j++)
    {
      if(num[j]>num[j+1])
	{
	  temp=num[j];
	  num[j]=num[j+1];
	  num[j+1]=temp;
	}
    }
    }

   printf("sorted array: %d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4]);
  return 0;
}
