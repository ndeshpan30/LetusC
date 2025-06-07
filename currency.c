#include<stdio.h>
int main()
{
  int sum,num,hun,fif,ten,five,two,one,amt1,amt2,amt3,amt4,amt5;
  printf("Enter the amount");
  scanf("%d",&num);
  hun=num/100;
  amt1=num%100;
  fif=amt1/50;
  amt2=amt1%50;
  ten=amt2/10;
  amt3=amt2%10;
  five=amt3/5;
  amt4=amt3%5;
  two=amt4/2;
  amt5=amt4%2;
  one=amt5/1;
  sum=hun+fif+ten+five+two+one;
  printf("Minimum number of notes needed is %d",sum);
  return 0;
  
}
