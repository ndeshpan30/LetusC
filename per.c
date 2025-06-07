#include<stdio.h>
int main()
{
  int area, peri, l,b;
  printf("enter the length of the rectangle");
  scanf("%d",&l);
    printf("enter the breadth of the rectangle");
  scanf("%d",&b);
  area=l*b;
  peri=2*(l+b);
  if(area>peri)
    printf("Area is greater");
    else printf("Perimeter is greater");
  return 0;
}
