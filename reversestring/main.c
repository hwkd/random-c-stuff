#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000

void reverse_string(char to[], char from[]);

int main(void)
{
  char line[MAXLINE];

  reverse_string(line, "hello world");
  printf("%s\n", line);

  return EXIT_SUCCESS;
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