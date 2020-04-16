#include <stdio.h>
int main()
{
  int o = 0;
  scanf("%d", &o);
  int a = o/100;
  int b = o%100/10;
  int c = o%10;
  printf("%d",c*100+b*10+a);
  return 0;
}