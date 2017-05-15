#include<stdio.h>

int d[101][1001];
int v[101];

int main(){
  int n,s,m;
  int fin = -1;
  scanf("%d %d %d", &n, &s, &m);
  for(int i=1;i<=n;i++)
    scanf("%d", &v[i]);

  d[0][s] = 1;
  for(int i=0;i<n;i++){
    for(int j=0;j<=m;j++){
      if(d[i][j] == 0)
	continue;
      if(j-v[i+1] >= 0)
	d[i+1][j-v[i+1]] = 1;
      if(j+v[i+1] <= m)
	d[i+1][j+v[i+1]] = 1;
    }
  }

  for(int i=0; i<=m; i++)
    if(d[n][i] == 1)
      fin = i;
	
  printf("%d\n", fin);
  return 0;
}
