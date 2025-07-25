#include<stdio.h>
int main()
{
  int num[10]={13,12,56,78,3,56,24,65,19,76};
  int t,i;
  printf("original array:\n");
  for(i=0;i<=10;i++)
    {
      printf("%d ",num[i]);

    }
  for(i=0;i<=9;i++)
    {
      if(i%2==0)
	{
	t=num[i];
      num[i]=num[i+1];
      num[i+1]=t;
	}}

   printf("new array:\n");
for(i=0;i<=10;i++)
    {
      printf("%d ",num[i]);

    }


}
