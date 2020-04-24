#include <stdio.h>

int main(void)
{
  int n = 50;
  int *p = &n;
  char *s = "CHIMP";
  printf("%s\n", s);
  printf("%p\n", s);
  printf("%p\n", &s[0]);
  printf("%p\n", &s[1]);
  printf("%p\n", &s[2]);
  printf("hexademal addr/pointer of n: %p\n", p);
  printf("grab the value from pointer: %i\n", *p);
}