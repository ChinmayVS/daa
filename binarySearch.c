#include <stdio.h>
int binarySearch(int low,int high, int arr[], int k){
  while( low <= high){
    int mid= low + (high-low)/2;
    if (arr[mid]== k){
      return mid;
    }
    if (arr[mid]<k){
      binarySearch(mid+1,high,arr,int k)
        }
    else{
      binarySearch(low,high-1,arr,int k)
    }
    return -1;
  }
}
int main(){
  arr[5]={1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k=2;
  int result = binarySearch(0,n-1,arr,k);
  if (result == -1){
    printf("Element is not in the array");

  }
  else printf("Element is present at index %d", result);

}
