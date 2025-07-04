/*program to print all armstron numbers between 1 and 500*/

#include<stdio.h>
int main()

{
  int s,n=0,a,a1,b1,b,c;

 while(n<=500)
   {
 a=n/100;
 a1=n%100;
 b=a1/10;
 b1=a1%10;
 c=b1/1;

 s=(a*a*a)+(b*b*b)+(c*c*c);

 if(s==n)
   printf("%d\n",n);

 n=n+1;
     }
 return 0;

}
