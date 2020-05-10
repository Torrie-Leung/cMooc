#include <stdio.h>
int main()
{
  const int MINIOR = 35;
  int age = 0;
  printf("请输入你的年龄：");
  scanf("%d", &age);
  printf("你的年龄是%d岁。\n", age);
  if(age < MINIOR){
    printf("年轻是美好的,加油！\n");
  }else{
    printf("岁月记录了经验与成长，加油！\n");
  }
  printf("年龄决定了你的精神世界，好好珍惜吧。\n");
}