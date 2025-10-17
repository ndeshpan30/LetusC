#include<stdio.h>
void merge(int arr[], int left, int mid, int right);
void split(int arr[], int left, int right);
int main()
{
  int x,i,j;

  printf("Enter the number of elements in the array: ");
  scanf("%d",&x);
  int n[x];
  printf("Enter the elements of the array: ");
  for(i=0;i<x;i++)
    {
     scanf("%d",&n[i]);
    }
  split(n,0,(x-1));

  printf("Sorted array: ");
    for (int j=0;j<x;j++) {
        printf("%d ",n[j]);
    }
	return 0;  
    }

void split(int arr[],int left, int right)
{
      if(left<right)
      {
	int mid;
  mid=(left+right)/2;
  split(arr,left,mid);
  split(arr,mid+1,right);
  merge(arr,left,mid,right);

      }}
      void merge(int arr[],int left,int mid,int right)
{
  int k=left;
  int n1=mid-left+1;
  int n2=right-mid;

  int L[n1],R[n2];

  for(int i=0;i<n1;i++)
    {L[i]=arr[left+i];}
  for(int j=0;j<n2;j++)
    {R[j]=arr[mid+1+j];}
  int i=0,j=0;

  while(i<n1 && j<n2)
    {
      if(L[i]>R[j])
	{
	  arr[k]=R[j];
	  j++;
	  
	}
      else if(L[i]<R[j])
	{
	  arr[k]=L[i];
          i++;
	}
      k++;
      }

  while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
