#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
  string s = get_string("Before: ");
  int n = strlen(s);
  printf("After: ");
  for(int i = 0; i < n; i++)
  {
    // if(s[i] >= 'a' && s[i] <= 'z')
    // {
    //   // convert to uppercase
    //   printf("%c", s[i] - 32);
    // }
    // else
    // {
    //   printf("%c", s[i]);
    // }
    printf("%c", toupper(s[i]));
    
  }
  printf("\n");
}