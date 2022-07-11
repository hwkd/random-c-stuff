#include <stdlib.h>
#include <stdio.h>

int get_line(char line[], int maxline);
int detab(char detabbed[], char line[], int tabsize);

#define MAXLINE 1000
#define TABSIZE 4

int main(void)
{
  char line[MAXLINE], detabbed[MAXLINE];
  int len;

  while ((len = get_line(line, MAXLINE)) > 0)
  {
    detab(detabbed, line, TABSIZE);
    printf("%s", detabbed);
  }

  return EXIT_SUCCESS;
}

int get_line(char line[], int maxline)
{
  int c, i;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  if (c == '\n')
    line[i++] = '\n';

  line[i] = '\0';

  return i;
}

int detab(char detabbed[], char line[], int tabsize)
{
  int c, i, j;

  i = j = 0;
  while (line[i] != '\0')
  {
    c = line[i];

    if (c == '\t')
    {
      int n = tabsize - (j % tabsize);
      while (n > 0)
      {
        detabbed[j++] = ' ';
        n--;
      }
    }
    else
      detabbed[j++] = c;

    i++;
  }

  return j;
}