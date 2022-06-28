#include <stdio.h>
#include <stdlib.h>

void celsiusToFahrenheit(float *output, int lower, int upper, int step);

int main()
{
  int lower = 0, upper = 300, step = 20;
  // Just assume upper, lower, and step does not end up with a floating number
  int size = ((upper - lower) / step) * 2;
  float *result = (float *)malloc(sizeof(float) * size);
  celsiusToFahrenheit(result, lower, upper, step);

  for (size_t i = 0; i <= size; i += 2)
  {
    printf("%3.0f %6.1f\n", result[i], result[i + 1]);
  }

  free(result);

  return EXIT_SUCCESS;
}

void celsiusToFahrenheit(float *output, int lower, int upper, int step)
{
  float fahr, celsius;

  int i = 0;
  for (fahr = lower; fahr <= upper; fahr += step)
  {
    celsius = (5.0/9.0) * (fahr - 32);
    output[i] = fahr;
    output[i + 1] = celsius;
    i += 2;
  }
}