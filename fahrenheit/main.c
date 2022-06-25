#include <stdio.h>
#include <stdlib.h>

void celsiusToFahrenheit(int *output, int lower, int upper, int step);

int main()
{
  int lower = 0, upper = 300, step = 20;
  // Just assume upper, lower, and step does not end up with a floating number
  int size = ((upper - lower) / step) * 2;
  int *result = (int *)malloc(sizeof(int) * size);
  celsiusToFahrenheit(result, lower, upper, step);

  for (size_t i = 0; i <= size; i += 2)
  {
    printf("%d %d\n", result[i], result[i + 1]);
  }

  free(result);

  return EXIT_SUCCESS;
}

void celsiusToFahrenheit(int *output, int lower, int upper, int step)
{
  int fahr, celsius;

  int i = 0;
  for (int fahr = lower; fahr <= upper; fahr += step)
  {
    celsius = 5 * (fahr - 32) / 9;
    output[i] = fahr;
    output[i + 1] = celsius;
    i += 2;
  }
}