/*Chapter 4, example problem 3: Program to determine whether a triangle is valid or not, given its sides a,b,c.*/


#include<stdio.h>
int main()
{
  int a,b,c;

  printf("Enter the sides of the triangle in the following format: (a b c).\n");
  scanf("%d %d %d",&a,&b,&c);

  if(a>b && a>c)
    {if (a<b+c)
	printf("The triangle is valid.\n");
      else printf("The triangle is invalid.\n");}

  else if(b>a && b>c)
    {if(b<a+c)
	printf("The triangle is valid.\n");
    else printf("The triangle is invalid.\n");}

  else if(c>a && c>b)
    {if(c<a+b)
        printf("The triangle is valid.\n");
    else printf("The triangle is invalid.\n");}


  return 0;
  

}
