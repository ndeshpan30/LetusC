#include<stdio.h>
#include<math.h>
int main()
{
  float  a,b,ab;
  printf("Enter 2 numbers.");
  scanf("%f %f",&a,&b);
  ab=pow(a,b);
  printf("%f to the power %f is %f.\n",a,b,ab);
  return 0;
}
