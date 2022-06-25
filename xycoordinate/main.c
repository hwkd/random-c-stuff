#include <stdio.h>

#define WIDTH 5
#define HEIGHT 5

int main()
{
  int matrix_a[HEIGHT][WIDTH];
  int i = 0;

  for (size_t y = 0; y < HEIGHT; y++)
  {
    for (size_t x = 0; x < WIDTH; x++)
    {
      printf("%d ", i);
      matrix_a[y][x] = i;
      i += 1;
    }
    printf("\n");
  }

  int matrix_b[HEIGHT * WIDTH];
  i = 0;
  for (size_t y = 0; y < HEIGHT; y++)
  {
    for (size_t x = 0; x < WIDTH; x++)
    {
      matrix_b[x + y * WIDTH] = i;
      i += 1;
    }
  }

  for (size_t i = 0; i < HEIGHT * WIDTH; i++)
  {
    printf("%d ", matrix_b[i]);
  }
  printf("\n");

  int y = 2, x = 3;
  // Value at [3, 2] should be 13
  printf("%d\n", matrix_a[y][x]);
  printf("%d\n", matrix_b[x + y * WIDTH]);
  printf("%s\n", matrix_a[y][x] == matrix_b[x + y * WIDTH] ? "true" : "false");

  return 0;
}