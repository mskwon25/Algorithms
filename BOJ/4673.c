#include<stdio.h>

int d[10001];
  
int main(){
  int n=10000;
  int sum,k;
  for(int i=1;i<=n;i++){
    k=i;
    sum = k;
    while(k!=0){
      sum += k%10;
      k /= 10;
    }

    if(sum <= 10000)
      d[sum] = 1;
  }

  for(int i=1;i<=n;i++)
    if(d[i] == 0)
      printf("%d\n", i);

  return 0;
}
