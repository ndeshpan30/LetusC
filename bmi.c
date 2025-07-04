/*program to calculate bmi and classify it.*/
#include<stdio.h>
#include<math.h>

int main()
{
  float h,w,bmi,height;
  printf("Enter the weight of the person (in kgs): ");
  scanf("%f",&w);
  printf("Enter the height of the person (in m): ");
  scanf("%f",&h);
  height=pow(h,2);

    bmi=w/height;

    printf("BMI=%f\n",bmi);
    if(bmi<15)
      printf("Starvation.\n");
      else if(bmi>=15 && bmi <17.5)
        printf("Anorexic.\n");
        else if(bmi>=17.6 && bmi <18.5)
          printf("Underweight.\n");
        else if(bmi>=18.6 && bmi <25)
          printf("Ideal.\n");
          else if(bmi>=25 && bmi <26)
            printf("Overweight.\n");
        else if(bmi>=26 && bmi <30)
          printf("Obese.\n");
        else if(bmi>=30)
          printf("Morbidly obese.\n");
       return 0;
  
}
