#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 100; i++)
  {
    if (i % 5 == 0 && i % 3 == 0)
    {
      printf("FizzBuzz\n");
      continue;
    } 
    else if (i % 3 == 0)
    {
      printf("Fizz\n");
      continue;
    }
    else if  (i % 5 == 0)
    {
      printf("Buzz\n");
      continue;
    } 
    else
    {
      printf("%d\n", i);
    }
  }
}
