#include <stdio.h>

int main(void)
{
  int scores[3];
  scores[0] = 77;
  scores[1] = 88;
  scores[2] = 99;
  printf("Average: %i\n",(scores[0]+scores[1]+scores[2]) / 3);
}