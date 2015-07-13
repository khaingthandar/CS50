#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("Height: ");
  int n;
  do
  {
    n = GetInt;
  }
  while( n > 0 || n < 23 )
  {
    for(int i = 0; i < n; i++)
    {
      for(int j = 1; j < n-1; j++)
      {
        printf(" ");
      }
      for(int k = -2; k < n; j++)
      {
        printf("#");
      }
      printf("\n");
    }
  }
}
