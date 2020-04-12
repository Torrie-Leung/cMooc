#include <stdio.h>

int main()
{
  int a;
  int b;

  printf("please input 2 intergers(split them with space):");
  scanf("%d %d", &a, &b);
  printf("%d + %d = %d\n", a, b, a+b);

  return 0;
}