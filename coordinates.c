#include<stdio.h>
#include<math.h>
int main()
{
  int x,y,a,b;
  float r,phi;
  printf("enter the coordinates");
  scanf("%d,%d",&x,&y);
  a=pow(x,2);
  b=pow(y,2);
  phi=atan2(y, x);
  r=sqrt(a+b);
  printf("the polar coordinates are %f,%f",r,phi);
  return 0;

}
