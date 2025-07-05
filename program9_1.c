#include<stdio.h>
#include<math.h>
void sum(int *,int *,int *,int,int,int,int,int);
int main()
{
  int r1,r2,r3,a,b,c,d,e;
  printf("Enter 5 numbers: ");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  sum(&r1,&r2,&r3,a,b,c,d,e);
  printf("sum=%d\naverage=%d\ndeviation=%d\n",r1,r2,r3);
}

void sum(int *sum,int *av,int *deviation,int a,int b,int c,int d,int e)
{
  int i;
  *sum=a+b+c+d+e;
  *av = *sum/5;
  i=pow(*av-a,2)+pow(*av-b,2)+pow(*av-c,2)+pow(*av-d,2)+pow(*av-e,2);
  *deviation=sqrt(i);
}
	    

