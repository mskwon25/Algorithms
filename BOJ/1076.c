#include<stdio.h>
#include<string.h>
#include<math.h>

char d[][10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
long long sum;


int main(){
  char input[3][10];
  long long a,b,c;
  for(int i=0; i<3; i++)
    scanf("%s", input[i]);
  
  for(int i=0; i<10; i++){
    if(!strcmp(d[i],input[0]))
      a=i*10;
    if(!strcmp(d[i],input[1]))
      b=i;
    if(!strcmp(d[i],input[2]))
      c=powl(10,i);
  }
       
  printf("%lld\n", (a+b)*c);
  return 0;
}
