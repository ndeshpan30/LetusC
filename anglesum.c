/*program to check if a triangle is valid or not*/
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the angles of the triangle");
  scanf("%d,%d,%d",&a,&b,&c);
  if((a+b+c)>180)
    printf("Triangle is not valid");
  else
    printf("Triangle is valid");
  return 0;
}
