#include<stdio.h>
#include<math.h>
int main()
{
 
  float s,a,s1,s2,s3;
  printf("enter the three sides of the triangle");
  scanf("%f%f%f",&s1,&s2,&s3);
  s=(s1+s2+s3)/2;
  a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
  printf("the area of the triangle is=%f\n",a);
  return 0;
	 
}
