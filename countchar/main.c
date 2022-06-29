/*
 * Character constant: character written between single quotes
 * that represents an integer value equal to the numerical value
 * of the character in the machine’s character set.
 */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  // since characters are actually representations of integers
  // (as constants), they can be assigned to int type variables.
  int c;

  long blanks = 0;
  long tabs = 0;
  long lines = 0;

  while ((c = getchar()) != EOF)
  {
    switch (c)
    {
    case ' ':
      blanks++;
      break;
    case '\t':
      tabs++;
      break;
    case '\n':
      lines++;
      break;
    }
  }

  printf("Blanks: %ld\n", blanks);
  printf("Tabs: %ld\n", tabs);
  printf("Lines: %ld\n", lines);

  return EXIT_SUCCESS;
}