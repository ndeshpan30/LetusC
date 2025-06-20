#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,x,y,z;
  printf("Enter the lengths of the three sides of the triangle.\n");
  scanf("%d %d %d",&a,&b,&c);

  x=pow(a,2);
  y=pow(b,2);
  z=pow(c,2);


  if((a>=b && a>=c && a<b+c)||(b>=a && b>=c && b<a+c)||(c>=b && c>=a && c<b+a))
    {
      if(a==b && b==c)
      printf("It is an equilateral triangle\n");
      
      else if((a>b && a>c && x==y+z)||(b>c && b>a && y==x+z)||(c>b && c>a && z==x+y))
	
      	printf("It is a right angled triangle.\n");

      else if((a==b && a!=c)||(c==b && a!=c)||(a==c && b!=a))
	printf("It is an isoceles triangle.\n");
      else
		printf("It is a scalene triangle.\n");
     }
  else
    printf("This is an invalid triangle.\n");

  return 0;
}
