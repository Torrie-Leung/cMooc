#include <stdio.h>

int main(void)
{
  int n = 50;
  int *p = &n;
  printf("hexademal addr/pointer of n: %p\n", p);
  printf("grab the value from pointer: %i\n", *p);
}