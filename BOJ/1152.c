#include <stdio.h>
#include <string.h>
int sum,check;

int main(void)
{
  char c; 
  while ((c = getchar()) != EOF && c != '\n') {
    if (c == ' ') {
      check = 0;
    }
    else {
      if (check == 0) {
	sum++;
	check = 1;
      }
    }
  }
 
  printf("%d\n", sum);
  return 0;
}
