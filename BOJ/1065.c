#include<stdio.h>

int n,sum;
int main(){
  int d;
  int k,check;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    check =0;
    k=i;
    d = k/10%10-k%10;
    while(k>=10){
      if(d != k/10%10-k%10){
	check=1;
	break;
      }
      k /= 10;
    }
    if(check ==0)
      sum++;
  }

  printf("%d\n", sum);
  return 0;
}
	
