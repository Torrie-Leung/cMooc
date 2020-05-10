#include <stdio.h>
int main()
{
  int x;
  scanf("%d", &x);
  int n = 0;
  do{
    x /= 10;
    n++;
  }while (x > 0);
  printf("你输入了%d位数\n", n);
  return 0;
}