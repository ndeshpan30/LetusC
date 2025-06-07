#include<stdio.h>
int main()
{
  int sum,num,a,b,c,d,e,a1,b1,c1,d1,e1;
  printf("Enter a five digit number: ");
  scanf("%d",&num);
  a=num/10000;
  a1=num%10000;
  b=a1/1000;
  b1=a1%1000;
  c=b1/100;
  c1=b1%100;
  d=c1/10;
  d1=c1%10;
  e=d1/1;
  e1=d1%1;
  sum=a+b+c+d+e;
  printf("sum of the digits =%d",sum);
  return 0;
}
