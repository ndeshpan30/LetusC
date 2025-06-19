/*When interest compounds q times a year at an annual rate of r% for t years, the principle p compounds to an amount a as per the following formula a=p(1+r/q)^nq. Write a program to read 10 sets of p,r,t and q, and calulate the corresponding amount each time. */

#include<stdio.h>
#include<math.h>
int main()
{
  float p,r,t,q,a,i;

  for(i=1;i<=10;i++)
    {
      printf("Enter the principle amount: ");
      scanf("%f",&p);
       printf("Enter the rate of interest: ");
      scanf("%f",&r);
       printf("Enter the time(in years): ");
      scanf("%f",&t);
       printf("Enter the number of times it must be compounded annually: ");
      scanf("%f",&q);

      a=p*pow((1+((r/100)/q)),(t*q));

  printf("The compounded amount is: %f\n",a);
}
  return 0;
}
