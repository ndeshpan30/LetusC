/*Question: If the ages of ram, shyam and ajay are entered through the keyboardwrite a program to determine the youngest of the three.*/

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the age of Ram: ");
  scanf("%d",&a);
   printf("Enter the age of Shyam: ");
  scanf("%d",&b);
 printf("Enter the age of Ajay: ");
  scanf("%d",&c);

  if(a>b)
    {if(b>c)
	{printf("Ajay is the youngest\n");}
      else
	{if(b==c)
	    {printf("Shyam and ajay are younger than ram\n");}
	  else
	    {printf("Shyam is the youngest\n");}
	}}
  else
    {if(a==b)
      {if(a>c)
	  {printf("Ajay is the youngest\n");}
	else
	  {if(b==c)
	      {printf("All are of the same age\n");}
	    else
	      {printf("Ram and shyam are younger than Ajay\n");}}}
      else
	{if(a>c)
	    {if(b>c)
		{printf("Ajay is the youngest\n");}
	      else
		{printf("Ram is the youngest\n");}}
	  else
	    {if(a==c)
		{printf("Ram and ajay are equal in age and younger than shyam\n");}
	      else
		{printf("Ram is the youngest\n");}}}}

      return 0;
}
