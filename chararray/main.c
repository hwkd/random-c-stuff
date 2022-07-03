#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000 // Max input line size

int get_line(char line[], int maxline);
void copy_string(char to[], char from[]);

int main(void)
{
  int len, max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy_string(longest, line);
    }
  }
  printf("Longest line is:\n\t%s\nThe length is:\n\t%d\n", longest, max);

  return EXIT_SUCCESS;
}

int get_line(char line[], int maxline)
{
  int i, c;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    line[i] = c;
  }

  line[i] = '\0';

  return i;
}

void copy_string(char to[], char from[])
{
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    i++;
}