/*calculating factorials usung a function.*/

#include<stdio.h>
int factorial(int x);
int main()
{
  int n,f;
  printf("Enter a number: ");
  scanf("%d",&n);
  f=factorial(n);
  printf("%d ! = %d",n,f);
  return 0;
}


  int factorial(int x)
  {
    int i,j=1;
  for(i=1;i<=x;i++)
    {
      j=j*i;
    }
  return j;
  }

