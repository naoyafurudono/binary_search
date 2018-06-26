#include <stdio.h>

int n;/*合計の仕事時間*/
int k;/*人数*/
int A[100000];/*iがする仕事量*/
/*p(x): 最大の仕事量をxとしたとき、k人で仕事を捌けるか
A[n]を前から読んでいって、xにぎりぎり収まる範囲まで詰めていく。
k人分で収まればtrue,収まらなければfalse*/
int p(int x){
    int t,i,j;
    t = x;
    i = 0;
    j =k - 1;
    while(i < n && j >= 0){
        t -= A[i];
        if(t < 0){
            t = x;
            j--;
        }else{
            i++;
        }
        }
return j >= 0;
}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while(ub - lb > 1){
      int m = (lb + ub) / 2;
      if(p(m)){
          ub = m;
      }else{
          lb = m;
      }
  }
  printf("%d\n",ub);
  return 0;
}
