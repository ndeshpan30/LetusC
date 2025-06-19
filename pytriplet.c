#include<stdio.h>
int main()
{

  int x,i,p,b,h;

  for(i=1;i<=30;i++)
    {
      p=i;
      b=((i*i)-1)/2;
      h=((i*i)+1)/2;

      if(b<=30 && h<=30 && b>0 && h>0)
      printf("%d %d %d\n",p,b,h);
    }
  return 0;
}
