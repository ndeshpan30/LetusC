#include<stdio.h>
#include<math.h>
void fact_pow(int *,int *,int,int,int);
int main()
{
  int x,power,fact,p,q;
  printf("Enter a number: ");
  scanf("%d",&x);
  printf("Enter the base and exponent: ");
  scanf("%d %d",&p,&q);
  fact_pow(&power,&fact,x,p,q);
  printf("%d^%d = %d\n%d ! = %d\n ",p,q,power,x,fact);
}

void fact_pow(int *power,int *fact,int x,int p,int q)
{
  int i=1,j=1;
  *power=pow(p,q);

  for(i=1;i<=x;i++)
    {
      j=j*i;
    }
  *fact=j;
}

