#include <stdio.h>

int main()
{
  int price = 0;
  printf("please input price(¥)");
  scanf("%d", &price);

  int change = 100 - price;
  printf("%d¥ back to you\n", change);
  
  return 0;
}