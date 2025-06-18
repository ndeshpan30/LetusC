/*Question: According to the gregorian calendar, it was monday on the date 01/01/0. If any year is input through the keyboard, write a program to find out what was on the 1st of January that year.*/

#include<stdio.h>
int main()
{
  int i,y,d=0;
  printf("Enter the year.");
  scanf("%d",&y);
  for(i=1;i<=y;i++)
    {  if(i%4==0)
      d=d+366;
      else 
	d=d+365;
    }

  if(d%7==2)
      printf("It is/was Monday on 1st January %d\n",y);
  else if(d%7==3)
	printf("It is/was Tuesday on 1st January %d\n",y);
 else if(d%7==4)
        printf("It is/was Wednesday on 1st January %d\n",y);
 else if(d%7==5)
        printf("It is/was Thursday on 1st January %d\n",y);
 else if(d%7==6)
        printf("It is/was Friday on 1st January %d\n",y);
 else if(d%7==0)
        printf("It is/was Saturday on 1st January %d\n",y);
 else if(d%7==1)
    printf("It is/was Sunday on 1st January %d\n",y);

  return 0;

    }

  


