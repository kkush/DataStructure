#include <iostream>
#include <cstdio>
#define max 100000
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }
using namespace std;

int main(){
      int n,i,j,arr[max];
      scanf("%d",&n); // Input the number of integers to be sorted
      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      for(i=0; i<n-1; i++)
      {
            for(j=0; j<n-i-1; j++)
              { 
                    if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
              }
      }
      for(i=0;i<n;i++)
      {
            printf("%d ",arr[i]);
      }
      
    return 0;  
}
