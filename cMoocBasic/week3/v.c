#include <stdio.h>
int main()
{
  int a,b;
  printf("请输入2个整数(空格隔开)：");
  scanf("%d %d",&a, &b);
  int max = b;
  if(a > b){
    max = a;
  }
  printf("大的那个数字是%d\n", max);
}