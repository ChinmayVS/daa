#include<stdio.h>
#include<stdlib.h>
int main(){
  int arrA[]={3,2,5,1,2,0,0,3};
  int n= sizeof(arrA)/sizeof(arrA[0]);
  int k= arrA[0];
  int c[k]={};
  int b[n]={};
  for (int i=1;i<n;i++){
    if (k< arrA[i]){
      k=arrA[i];
    }
  }
  int* c = (int*)calloc(k + 1, sizeof(int));

  for(int j=1;j<=n;j++){
    c[arrA[j]]+=1;
  }
  for(int i=1;i<=k;i++){
    c[i]+=c[i-1];
  }
  for(int j=n;j>=1;j--){
    b[c[arrA[j]]]+=arrA[j];
    c[arrA[j]]-=1;
  }
    free(c);
    free(b);
    for (int i = 0; i < n; i++)
    printf("%d ", b[i]);
}
