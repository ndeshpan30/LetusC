#include<stdio.h>
#include<math.h>
int main()
{
  float i,p;
  p=100000/pow(1.1,10);
  
 
  for(i=1;i<=10;i++)
    {
      p=p+(p/10);
      printf("Population in %f year/s = %f\n",i,p);

    }
  return 0;

}
