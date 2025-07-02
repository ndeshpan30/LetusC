#include<stdio.h>

int main()
{
  int a,b,c,d,x,y;

  for(a=1;a<=100;a++)
    {
      for(b=a;b<=100;b++)
	{
	  x=(a*a*a)+(b*b*b);
	  for(c=a;c<=100;c++)
	    {
	      for(d=c;d<=1;d++)
		y=(c*c*c)+(d*d*d);
		  if(x==y)
		    printf("%d",x);
	      
		 
	    }
	  
	}
    }
  return 0;
}
