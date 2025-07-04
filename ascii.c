/*program to print all ascii values and their equivalents*/
#include<stdio.h>
int main()
{
  char c;
  int n,i=0;
  while(i<=255)
    {   c=i;
  i=i+1;
  printf("%c",c);
    }
  return 0;
}
