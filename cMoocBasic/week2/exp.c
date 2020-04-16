#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;
  a = 10;
  b = 10;
  c = 14;
  int t1 = c++;
  int t2 = ++c;
  printf("a++: %d\n", a++);
  printf("a: %d\n", a);
  printf("++b: %d\n", ++b);
  printf("b: %d\n", b);
  printf("t1: %d\n", t1);
  printf("t2: %d\n", t2);
  return 0;
}