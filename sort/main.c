#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "insertion_sort.h"

#define LENGTH 12
#define MAX 30

void printList(int list[], int length, char label[]);
int randomInt(int max);

int main(void)
{
  // Seed random value generator
  srand(time(NULL));

  int list[LENGTH];

  // Initialise list with random numbers
  for (size_t i = 0; i < LENGTH; i++)
  {
    list[i] = randomInt(MAX);
  }

  printList(list, LENGTH, "origin");

  insertion_sort(list, LENGTH);

  printList(list, LENGTH, "insertion sort");

  return EXIT_SUCCESS;
}

// Simply print the values of the given list
void printList(int list[], int length, char label[])
{
  printf("%s: ", label);
  for (size_t i = 0; i < length; i++)
  {
    printf("%d ", list[i]);
  }
  printf("\n");
}

// Generate random integer between 0 and max
int randomInt(int max)
{
  return rand() % max;
}