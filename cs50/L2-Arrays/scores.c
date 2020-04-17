#include <stdio.h>
#include <cs50.h>
// get average func
float average(int length, int array[])
{
  int sum = 0;
  for(int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return (float)sum/(float)length;
}
int main(void)
{
  
  int n = get_int("Number of scores: ");
  int scores[n];
  for(int i = 0; i < n; i++)
  {
    scores[i] = get_int("Score %i: ", i);
   
  }
   printf("Average: %f\n",average(n,scores));
}
