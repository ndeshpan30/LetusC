/*program to convert any given year ino its roman equivalent.*/
#include<stdio.h>
void roman(int p,char q,int r);
int mod(int x,int z);
int main()
{
  int y,i1,m2,d2,c2,l2,x2,v2,i2;
  char m,d,c,l,v,x,i;
  printf("Enter the year: ");
  scanf("%d",&y);
  roman(y,'m',1000);
    m2=mod(y,1000);
    
    roman(m2,'d',500);
    d2=mod(m2,500);

    roman(d2,'c',100);
    c2=mod(d2,100);

     roman(c2,'l',50);
    l2=mod(c2,50);

    roman(l2,'x',10);
    x2=mod(l2,10);
 
    v2=mod(x2,5);
    roman(x2,'v',5);
 
    i2=mod(v2,1);
    roman(v2,'i',1);
  
  return 0;
}

void roman(int p,char q,int r)
{
  int i,j;
  j=p/r;
for(i=0;i<j;i++)
  {
  printf("%c",q);
  }
 
  }
int mod(int x,int z)
{
  int t;
  t=x%z;
  return t;
}
