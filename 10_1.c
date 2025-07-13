#include<stdio.h>
int result(int);
int main()
{
  int n,sum;
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  sum = result(n);
  printf("%d",sum);
  return 0;
}

int result(int n)
{
  int sum=0,a,i;
    {if(n!=0)
    {
    a=n/10;
    sum=(n%10) + result(a);

  return sum;
}
  else
    return 0;
      return sum;
    }
    }
