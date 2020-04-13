#include <stdio.h>

int main()
{
  int hour1, min1;
  printf("请输入时间1:如1:20表示1点20分");
  scanf("%d:%d", &hour1, &min1);

  int hour2, min2;
  printf("请输入时间2:如12:50表示12点50分");
  
  
  scanf("%d:%d", &hour2, &min2);

  int t1 = hour1 * 60 + min1;
  int t2 = hour2 * 60 + min2;

  int t = t2 - t1;
  printf("时间差是%d小时%d分。", t/60, t%60);
  return 0;

}