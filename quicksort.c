#include<stdio.h>
void quicksort(int n[],int low,int high);
int partition(int n[],int low,int high);
int main()
{
  int x,i,j;
  printf("Enter the number of elements in the array: ");
  scanf("%d",&x);
  int n[x];
  printf("Enter the elements of the array: \n");
  for(i=0;i<x;i++)
    {printf("Element %d: ",i);
      scanf("%d",&n[i]);}

  quicksort(n,0,x-1);

  printf("sorted array: \n");
  for(j=0;j<x;j++)
    {printf("%d",n[j]);}
  return 0;
}

void quicksort(int n[],int low,int high)
{
  if(low<high)
    {
      int p=partition(n,low,high);
      quicksort(n,low,p-1);
      quicksort(n,p+1,high);
    }
}

int partition(int n[],int low,int high)
{
  int i=low-1;
  int pivot=n[high];
  int temp;
  for (int j=low;j<=high-1;j++)
     {
        if (n[j] < pivot) {
            i++;
	    temp=n[i];
	    n[i]=n[j];
	    n[j]=temp;
	}}
   temp=n[i+1];
   n[i+1]=n[high];
   n[high]=temp;
}


