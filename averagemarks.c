/*program to find average marks*/
#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,aggr;
  float per;

  printf("/n Enter  marks of 5 subjects");
  scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);
  aggr=m1+m2+m3+m4+m5;
  per=aggr/5;
  printf("aggregate marks=%d/n",aggr);
  printf("percentage=%f/n",per);
  return 0;
}
