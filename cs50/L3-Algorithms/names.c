#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("where is Callum?\n");
  string names[4] = {"EMMA","MARIO","Torrie","Callum"};
  for(int i =0; i < 4;i++)
  {
    if(strcmp(names[i],"Callum") == 0)
    {
      printf("Found Callum\n");
      return 0;
    }
  }
  printf("404\n");
  return 1;
  
}