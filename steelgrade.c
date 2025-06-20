#include<stdio.h>
int main()
{
  float h,cc,ts;

  printf("Enter hardness of steel: ");
  scanf("%f",&h);
   printf("Enter carbon content of steel: ");
  scanf("%f",&cc);
   printf("Enter tensile strength of steel: ");
  scanf("%f",&ts);

  if(h>50 && cc<0.7 && ts>5600)
    printf("Steel grade: 10.\n");
  else if(h>50 && cc<0.7)
    printf("Steel grade: 9.\n");
  else if(cc<0.7 && ts>5600)
    printf("Steel grade: 8.\n");
  else if(h>50 && ts>5600)
    printf("Steel grade: 7.\n");
  else if((h>50)||(cc<0.7)||(ts>5600))
    printf("Steel grade: 6.\n");
  else
    printf("Steel grade: 5");
  return 0;
}
