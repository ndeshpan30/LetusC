#include<stdio.h>
int main()
{

  int r,x,y,min,max;

    printf("Enter a number: ");
  scanf("%d",&x);

  min=x;
  max=x;
  
  while(x!=-1)
    {
 if(x<min)
   min=x;
 else if (x>max)
   max=x;
 printf("Enter a number. enter -1 to get output.: ");
  scanf("%d",&x);
    }


  r=max-min;
  printf("The maximum value in this set = %d\n",max);
  printf("The minimum value in this set = %d\n",min);
  printf("The range of this set = %d\n",r);
  
  return 0;

}
