#include <stdio.h>

int main()
{
  int amount = 100;
  int price = 0;
  printf("please input price(¥)");
  scanf("%d", &price);
  printf("please input cash(¥)");
  scanf("%d", &amount);
  int change = amount - price;
  printf("%d¥ back to you\n", change);
  
  return 0;
}