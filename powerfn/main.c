#include <stdlib.h>
#include <stdio.h>

int power(int base, int exponent);

int main(void)
{
  printf("2^0: %d\n", power(2, 0));
  printf("2^1: %d\n", power(2, 1));
  printf("2^2: %d\n", power(2, 2));
  printf("2^3: %d\n", power(2, 3));
  printf("2^4: %d\n", power(2, 4));
  printf("2^5: %d\n", power(2, 5));

  return EXIT_SUCCESS;
}

int power(int base, int exponent)
{
  int result;

  for (result = 1; exponent > 0; exponent--)
  {
    result = result * base;
  }
  return result;
}
