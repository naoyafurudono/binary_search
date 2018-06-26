#include <stdio.h>

int n;/*人数*/
int k;/*残りのバッグの個数*/
int A[100000];

int p(int x){
    int s = 0;/*sはn人がextraで必要とするバッグの個数*/
    int i;
    for(i = 0; i < n; i++){
        s += (A[i] - 1) / x;
    }
    return k >= s + n;/*s + nは必要なバッグの個数*/
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;/*10^9(A[i]の上限)*/
  while(ub - lb > 1){
     int m = (lb + ub)/2;
      if(p(m))/*mこ入るバッグで間に合うか*/{
          ub = m;
      }else{
          lb = m;
      }
  }
  printf("%d\n",ub);
  return 0;
}
