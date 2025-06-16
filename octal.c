
#include<stdio.h>
#include<math.h>
int main()
{
  int x,n,o=0,p=0;

  printf("Enter an integer: ");
  scanf("%d",&x);

  while(x>0)
    {
    

    n=x%8;
    x=x/8;

    o=o+(n*(pow(10,p)));

    p++;
      }
  printf("The octal equivalent of the integer = %d",o);
  return 0;    
  
}
