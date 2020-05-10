#include <stdio.h>
int main()
{
  int x;
  int n = 0;

  scanf("%d", &x);
  n++;
  x /= 10;
  while (x > 0)
  {
    /* code */
    n++;
    x /= 10;
  }
  printf("%d\n", n);
  return 0;
}