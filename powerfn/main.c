#include <stdlib.h>
#include <stdio.h>

int power(int base, int exp);

int main(void)
{
  // Test
  printf("2^0: %s\n", power(2, 0) == 1 ? "Pass" : "Fail");
  printf("2^1: %s\n", power(2, 1) == 2 ? "Pass" : "Fail");
  printf("2^2: %s\n", power(2, 2) == 4 ? "Pass" : "Fail");
  printf("2^3: %s\n", power(2, 3) == 8 ? "Pass" : "Fail");
  printf("2^4: %s\n", power(2, 4) == 16 ? "Pass" : "Fail");
  printf("2^5: %s\n", power(2, 5) == 32 ? "Pass" : "Fail");

  return EXIT_SUCCESS;
}

int power(int base, int exp)
{
  int x;
  for (x = 1; exp > 0; exp--)
  {
    x = x * base;
  }
  return x;
}