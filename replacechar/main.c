#include <stdlib.h>
#include <stdio.h>

// Exercise: Replace one or more blanks by a single blank
int main(void)
{
  int c, p = 0; // p stores previous value of c

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' && p == ' ')
      continue;

    p = c;
    putchar(c);
  }

  return EXIT_SUCCESS;
}
