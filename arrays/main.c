#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c, ndigits[10], nwhite, nother;

  nwhite = nother = 0;
  for (int i = 0; i < 10; i++)
  {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
    {
      ndigits[c - '0']++;
    }
    else if (c == ' ' || c == '\t' || c == '\n')
    {
      nwhite++;
    }
    else
    {
      nother++;
    }
  }

  for (int i = 0; i < 10; i++)
  { 
    printf("ndigits[%d]: %d\n", i, ndigits[i]);
  }

  printf("nwhite: %d\n", nwhite);
  printf("nother: %d\n", nother);

  return EXIT_SUCCESS;
}