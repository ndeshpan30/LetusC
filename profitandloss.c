#include<stdio.h>
int main()
{
  int cp,sp,p,l;
  printf("enter the cost price of the item: ");
  scanf("%d",&cp);
   printf("enter the selling  price of the item: ");
  scanf("%d",&sp);
  
  if(cp>sp)
    {l=cp-sp;
    p=0;
    printf("Loss incurred =%d\n",l);}
  else
    {
  if(sp>cp)
    {p=sp-cp;
    l=0;
    printf("Profit gained =%d\n",p);}
  else
    {if(cp==sp)
	printf("Net profit=0");}
    }
  return 0;

}
