#include<stdio.h>
#include<math.h>
int main()
{
  int v,t;
  float wcf, a;
  printf("Enter the wind velocity: ");
  scanf("%d",&v);
  printf("Enter the temperature: ");
  scanf("%d",&t);
  a=pow(v,0.16);
  wcf=37.54+(0.6215*t)+(0.4275*t-35.75)*a;
  printf("Wind chill factor is %f",wcf);
  return 0;
}
