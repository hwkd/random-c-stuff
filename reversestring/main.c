#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max);
void reverse_string(char to[], char from[]);

int main(void)
{
  char line[MAXLINE];
  char rline[MAXLINE];

  int len;
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    reverse_string(rline, line);
    printf("%s\n", rline);
  }

  return EXIT_SUCCESS;
}

int get_line(char line[], int max)
{
  int i, c;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  line[i] = '\0';

  return i;
}

void reverse_string(char to[], char from[])
{
  int i = 0;
  while (from[i] != '\0')
    i++;

  int j = i - 1;
  for (int k = 0; k < i; k++)
  {
    to[k] = from[j];
    j--;
  }
}