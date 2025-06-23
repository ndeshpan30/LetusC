/*Program to determine whether the given point(x,y) lies on the x-axis,y-axis, origin or on none of the above.*/

#include<stdio.h>
int main()
{
  float x,y;
  printf("Enter the coordinates of the point in x,y format: ");
  scanf("%f,%f",&x,&y);

  if(x==0)
    {
      if(y==0)
	printf("The point lies on the origin.\n");
      else
	printf("The point lies on the y-axis.\n");
    }
  else
    {
      if(y==0)
	printf("The point lies on the x-axis.\n");
      else
	printf("The point lies neither on the x-axis, y-axis nor the origin.\n");
    }
  return 0;
}
