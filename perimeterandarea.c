#include<stdio.h>
int main()
{
  int l,b,r;
  float per,arear,cir,areac;
  printf("/nEnter the length and breadth of the rectangle and radius of the circle");
  scanf("%d,%d,%d",&l,&b,&r);
  per= 2*(l+b);
  arear=l*b;
  cir=2*3.14*r;
  areac=3.14*r*r;
  printf("Perimeter of the rectangle is=%f",per);
  printf("area of the rectangle is=%f",arear);
  printf("Perimeter of the circle is=%f",cir);
  printf("area of the circle is=%f",areac);
  return 0;

}
