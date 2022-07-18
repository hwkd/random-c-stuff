#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main(void)
{
  int n;
  char line[MAXLINE];

  while ((n = get_line(line, MAXLINE)) > 0)
  {
    printf("%d\n", n);
  }

  return EXIT_SUCCESS;
}

int get_line(char line[], int maxline)
{
  int i, c;

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  if (c == '\n')
    line[i++] = '\n';

  line[i] = '\0';

  return i;
}
