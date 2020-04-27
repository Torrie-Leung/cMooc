#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  // string s = get_string("s: ");
  // string t = s;

  // t[0] = toupper(t[0]);
  // printf("%s\n", s);
  // printf("%s\n", t);
  char *s = get_string("s: ");
  char *t = malloc(strlen(s) + 1);
  int n = strlen(s);
  for(int i = 0; i < n + 1; i++)
  {
    t[i] = s[i];
  }
  t[0] = toupper(t[0]);
  printf("%s\n", s);
  printf("%s\n", t);
}