/*Question: Write a program for a mathcstick game being played between the user and the computer. The program must ensure that the computer always wins. The rules of the game are as follows:
 -There are 21 matchsticks
-The computer asks the player to pick 1,2,3 or 4 matchsticks
-After the person picks, the computer does its picking
-Whoever is forced to pick the last matchsticks loses the game.*/

#include<stdio.h>
int main()
{
  int x,y,i=21;

  while(i>=0)
    {
      printf("Pick any number from 1-4: ");
      scanf("%d",&x);

      i=i-x;
      printf("There are %d matchsticks remaining.\n",i);
      
      if(x==1)
	y=4;
      else if(x==2)
	y=3;
      else if(x==3)
	y=2;
      else if(x==4)
	y=1;

      i=i-y;
      if(i>0)
      printf("I pick: %d\n.",y);

      if(i>=0)
	printf("There are %d matchsticks remaining.\n",i);
      
    }

  printf("I win.\n");

  return 0;
}
