#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 1000

int get_line(char line[], int max);
int trim_end(char line[], int len);

int main(void)
{
  char line[MAX_LEN];
  int len, i;

  len = i = 0;
  while ((len = get_line(line, MAX_LEN)) > 0)
  {
    printf("%d: %s", len, line);
    printf("%d: %s", trim_end(line, len), line);
  }

  return EXIT_SUCCESS;
}

// Read a line from input.
// Returns length of line.
int get_line(char line[], int max)
{
  int i, c;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  if (c == '\n')
  {
    line[i++] = c;
  }

  line[i] = '\0';

  return i;
}

// Remove trailing blanks and tabs from the line and delete entirely blank lines.
// Returns new length of line.
int trim_end(char line[], int len)
{
  int has_lf = 0;
  int i;

  for (i = len - 1; i >= 0; i--)
  {
    int c = line[i];

    if (c != '\n' && c != '\0' && c != ' ' && c != '\t')
      break;

    if (c == '\n')
      has_lf = 1;
  }

  if (has_lf)
    line[++i] = '\n';

  line[++i] = '\0';

  return i;
}