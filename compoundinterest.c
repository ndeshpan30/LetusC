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
