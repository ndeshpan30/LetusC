#include<stdio.h>
int main()
{
  int x=0,j=0,k=0,n=0;
  printf(
	 "Enter as many numbers as you wish, they can be positive, negative or zero. Type 7777777 when you do not want to enter any more numbers and wish to get the output.\n");

  while(x!=7777777)
    {
      scanf("%d",&x);

      if(x>0)
	j=j+1;
      else if(x<0)
	k=k+1;
	else if(x==0)
	  n=n+1;
    }

  printf("The number of positive numbe#include<stdio.h>
int main()
{
  int x,j=0,k=0,n=0;
  printf(
         "Enter as many numbers as you wish, they can be positive, negative or zero. Type 777\
7777 when you do not want to enter any more numbers and wish to get the output.\n");

  while(x!=7777777)
    {
      scanf("%d",&x);

      if(x>0)
        j=j+1;
      else if(x<0)
        k=k+1;
        else if(x==0)
          n=n+1;
    }

  printf("The number of positive numbers = %d.\n",j);
   printf("The number of negative numbers = %d.\n",k);
    printf("The number of zeroes = %d.\n",n);

  return 0;
}
