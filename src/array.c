#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
    scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = n;
    while(ub - lb > 1){
        i = (lb + ub)/2;
        if(A[i] >= k){
            ub = i;
        }
        else{
            lb = i;
        }}
    printf("%d\n",ub);
  return 0;
}
