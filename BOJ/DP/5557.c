#include<stdio.h>

int d[101][20000];
int a[101];
int go(int i,int j){
  if(i==0) return 0;
  if(d[i][j] >=0) return d[i][j];

  d[i][j] = go(i-1, j-a[i]) + go(i-1, j+a[i]);
  
}

int main(){
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
    scanf("%d", &a[i]);
