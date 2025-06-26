/*program to find the gross salary, given that dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary*/
#include<stdio.h>
int main()
{
  float bp,da,hra,grpay;
  printf("/nEnter basic salary");
  scanf("%f",&bp);
  da=0.4*bp;
  hra=0.2*bp;
  grpay=bp+hra+da;
  printf(" basic salary is=%f/n",bp);
     printf(" dearness allowance is=%f/n",bp);
printf(" house rent allowance is=%f/n",bp);
 printf(" gross pay is=%f/n",bp);
 return 0;
}
