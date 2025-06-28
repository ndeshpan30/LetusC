/*finding a^b using functions.*/

#include<stdio.h>
#include<math.h>
int power(int x,int y);
int main()
{
  int a,b,p;
  printf("Enter the base: ");
  scanf("%d",&a);
  printf("Enter the exponent: ");
  scanf("%d",&b);

  p=power(a,b);
  printf("%d^%d = %d",a,b,p);
  return 0;
}

int power(int x,int y)
{
  int z;
  z=pow(x,y);
  return z;
}
