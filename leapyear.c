#include<stdio.h>
int main()
{
  int y;
  printf("Enter the year: ");
  scanf("%d",&y);
  if(y%4==0)
    {printf("It is a leap year");}
  else
    {printf("It is not a leap year");}
  return 0;
}
