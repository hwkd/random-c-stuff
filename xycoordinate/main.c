#include <stdio.h>

#define WIDTH 5
#define HEIGHT 5

void matrix_a(int height, int width);
void matrix_b(int height, int width);

int main()
{
  // Should print the same result
  matrix_a(HEIGHT, WIDTH);
  matrix_b(HEIGHT, WIDTH);

  return 0;
}

// 2D array
void matrix_a(int height, int width)
{
  int matrix[height][width];
  int i = 0;

  for (size_t y = 0; y < height; y++)
  {
    for (size_t x = 0; x < width; x++)
    {
      matrix[y][x] = i;
      i += 1;
    }
  }

  int x = 3, y = 2;
  // Value at [3, 2] should be 13
  printf("%d, ", matrix[y][x]);

  x = 4;
  y = 3;
  // Value at [4, 3] should be 19
  printf("%d\n", matrix[y][x]);
}

// 1D array translated from 2D array [x,y] => x + y * WIDTH
void matrix_b(int height, int width)
{
  int matrix[height * width];
  int i = 0;

  for (size_t y = 0; y < height; y++)
  {
    for (size_t x = 0; x < width; x++)
    {
      matrix[x + y * width] = i;
      i += 1;
    }
  }

  int x = 3, y = 2;
  // Value at [3, 2] should be 13
  printf("%d, ", matrix[x + y * WIDTH]);

  x = 4;
  y = 3;
  // Value at [4, 3] should be 19
  printf("%d\n", matrix[x + y * WIDTH]);
}