#include<stdio.h>
int main()
{

  int x,n;
  printf("Enter a number: ");
  scanf("%d",&x);
  n=(x)*(-1);
  if(x>0)
    printf("Absolute value of the number= %d",x);
  else if(x==0)
    printf("Absolute value of the number is 0");
  else
    printf("The absolute value of the number= %d",n);
  return 0;
  
}
