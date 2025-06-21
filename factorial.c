#include<stdio.h>
int main()
{
  int n,f,i=1;
  printf("Enter a number: ");
  scanf("%d",&n);
  f=1;
  while(i<=n)
    {
f=f*i;
 i=i+1;
    }
  printf("%d !=%d\n",n,f);
  return 0;
  
}
