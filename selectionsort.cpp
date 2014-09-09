#include<iostream>
#include<cstdio>
#define max 100000
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

int arr[max];

using namespace std; 

void selectionSort(int arr[], int n)
{
  int i, j;
  int min;

  for (i = 0; i < n; i++)
  {
    min = i;
    for (j = i+1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    swap(arr[j],arr[min]);
  }
}


int main(){
    int n;
    scanf("%d",&n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
     for(i=0; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
 return 0;   
}
