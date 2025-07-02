#include<stdio.h>
int main()
{
  int x,n,i=1,j=1;

  printf("Enter \n 1 for factorial of the number \n 2 to find out if its prime or not\n 3to f\
ind out if it is odd or even\n 4 to exit the program\n");

  scanf("%d",&x);
  switch(x)
    {
    case 1:
      printf("Enter the number: ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
	{
        j=j*i;
	}
      printf("%d ! = %d\n",n,j);
      break;
    case 2:
      printf("Enter a number: \n");
      scanf("%d",&n);
      for(i=2;i<=n-1;i++)
	{
	  if(n%i!=0)
	    continue;
	  else
	    goto out;
	  break;  
       }
    out:
      printf("It is a composite number\n");
      break;
      printf("It is a prime number\n");
    case 3:
      printf("Enter a number: ");
      scanf("%d",&n);
      if(n%2==0)
	printf("It is an even number\n");
      else printf("It is an odd number\n");
      break;
    case 4:
      break;
    }
   return 0;

}

