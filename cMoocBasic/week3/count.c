#include <stdio.h>
int main()
{
  // initialize
  int price = 0;
  int bill = 0;
  // input
  printf("请输入总金额：");
  scanf("%d", &price);
  printf("请输入票面：");
  scanf("%d", &bill);
  //output
  if(bill >= price){
    printf("应该找您：%d\n", bill - price);
  }else{
    printf("请补足：%d元\n", price - bill);
  }
  return 0;
}