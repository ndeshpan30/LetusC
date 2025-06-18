/*Program to determine whether a point(x1,y1) lies inside, on, or outside a circle, given the center(x,y) and radius of the circle*/

#include<stdio.h>
#include<math.h>
int main()
{
   float d,x,y,x1,y1,radius;

  printf("Enter the coordinates of the center of the circle");
  scanf("%f,%f",&x,&y);
  printf("Enter the radius of the circle");
  scanf("%f",&radius);
  printf("Enter the coordinates of the point P");
  scanf("%f,%f",&x1,&y1);

  d=sqrt(pow((x1-x),2)+pow((y1-y),2));

  if(radius>d)
    printf("The point lies inside the circle\n");
  else if(radius==d)
    printf("The point lies on the circumference of the circle\n");
  else
    printf("The point lies outside the circle\n");

  return 0;
}



