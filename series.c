#include<stdio.h>
int main()
{
  int x=1,i;
  float n=1;

  for(i=1;i<=7;i++)
    {
      x=x*i;
      n=n+(i/x);
    }
  printf("Sum of the series 1/1! + 2/2! + 3/3! + 4/4! +5/5! +6/6! + 7/7! is %f",n);
}
