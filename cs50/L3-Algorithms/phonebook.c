#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
  /* data */
  string name;
  string number;
}
person;

int main(void)
{
  person people[4];

  people[0].name = "Callum";
  people[0].number = "617-111-111";

  people[1].name = "Eddie";
  people[1].number = "617-000-000";

  people[2].name = "Torrie";
  people[2].number = "617-911-119";

  for(int i = 0; i < 3; i++)
  {
    if(strcmp(people[i].name, "Callum") == 0)
    {
      printf("%s\n", people[i].number);
      return 0;
    }
    printf("404\n");
    return 1;
  }
}
