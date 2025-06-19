#include<stdio.h>
#include<math.h>

int main()
{
  float x,i=1,l=0;
  
  printf("Enter a number: ");
  scanf("%f",&x);
  
  for(i=1;i<=x;i++)
    {
      l=l+0.5*pow(((x-1)/(x)),i);
    }
  printf("e^x = %f",l);

  return 0;
    }
