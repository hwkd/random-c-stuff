#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c;
  long nc = 0;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
    nc++;
  }

  printf("%ld\n", nc);

  return EXIT_SUCCESS;
}
