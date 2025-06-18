#include<stdio.h>
int main()
{
  int x,n,i,s;

  for(i=1;i<=3;i++)
    {
      for(n=1;n<=3;n++)
	{
	  for(x=1;x<=3;x++)
	    {
	      s=(i*100)+(n*10)+(x);
	  printf("%d\n",s);
	    }
	    }
    }
  return 0;
}
