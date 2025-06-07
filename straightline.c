#include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,m1,m2;
  printf("Enter the coordinates of point A: ");
  scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates of point B: ");
  scanf("%d %d",&x2,&y2);
  printf("Enter the coordinates of point C: ");
  scanf("%d %d",&x3,&y3);
  m1=(y2-y1)/(x2-x1);
  m2=(y3-y2)/(x3-x2);
  if(m1==m2)
    printf("All three points are on the same line\n");
  else
    printf("The three points are not on the same line\n");
  return 0;
  

}
