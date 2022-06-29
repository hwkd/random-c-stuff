#include <stdlib.h>
#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main(void)
{
  int c;
  long nc, nw, nl;
  short state = OUT;

  // Assignments assiciate from right to left
  nc = nw = nl = 0;
  while ((c = getchar()) != EOF)
  {
    nc++;

    if (c == '\n')
    {
      nl++;
    }
    if (c == ' ' || c == '\t' || c == '\n')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      nw++;
    }
  }

  printf("nc: %ld\nnw: %ld\nnl: %ld\n", nc, nw, nl);

  return EXIT_SUCCESS;
}