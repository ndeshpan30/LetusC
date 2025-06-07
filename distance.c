#include<stdio.h>
#include<math.h>
int main()
{
  double l1,l2,g1,g2;
  double d;
  printf("Enter the coordinates of Place 1 in the format (latitude,longitude): ");
  scanf("%lf,%lf",&l1,&g1);
  printf("Enter the coordinates of Place 2 in the format (latitude,longitude): ");
  scanf("%lf,%lf",&l2,&g2);
  d=3963*acos((sin(l1*0.017444)*sin(l2*0.017444))+(cos(l1*0.017444)*cos(l2*0.017444))*(cos((g2*0.017444)-(g1*0.017444))));
	      printf("distance in nautical miles is %f",d);
	      return 0;
	      
}
