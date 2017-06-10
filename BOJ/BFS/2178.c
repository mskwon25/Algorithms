#include<stdio.h>

int n,m;
int map[101][101];
int min=1000000;
int front, rear;
int x[10001],y[10001],l[10001];
void enqueue(int x_, int y_, int l_){
  x[rear] = x_;
  y[rear] = y_;
  l[rear] = l_;
  rear++;
}

int go(int i, int j, int z){
  int row, column, cnt;
  int front = 0;
  enqueue(i,j,z);
  while(front < rear){
    row = x[front];
    column = y[front];
    cnt = l[front];
    front++;

    if(row == n && column == m)
      return cnt;

    map[row][column] = 0;
    
    if(row < n && map[row+1][column] == 1){
      enqueue(row+1,column,cnt+1);
      map[row+1][column]=0;
    }
    if(row > 1 && map[row-1][column] == 1){
      enqueue(row-1,column,cnt+1);
      map[row-1][column]=0;
    }
    if(column < m && map[row][column+1] == 1){
      enqueue(row,column+1,cnt+1);
      map[row][column+1] = 0;
    }
    if(column > 1 && map[row][column-1] == 1){
      enqueue(row,column-1,cnt+1);
      map[row][column-1]=0;
    }
  }
  return -1;
}
  
int main(){
  scanf("%d %d", &n, &m);
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
      scanf("%1d", &map[i][j]);

  printf("%d\n",go(1,1,1));
  return 0;
}
