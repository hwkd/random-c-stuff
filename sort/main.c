/**
 * Important lessons learnt:
 *   - C supports callbacks
 *   - Arrays are always passed as reference; pointers are copied
 *   - bool types aren't primitive types in C; requires <stdbool.h> to be included
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#include "insertion_sort.h"

#define LENGTH 12
#define MAX 30

void runSortFunc(void (*sort)(int *list, size_t length), size_t length, int max);
int *generateList(int length, int max);
int randomInt(int max);
void printList(int list[], int length, char label[]);
void test(int list[], size_t length);

int main(void)
{
  // Seed random value generator
  srand(time(NULL));

  runSortFunc(insertion_sort, LENGTH, MAX);

  return EXIT_SUCCESS;
}

// Generates a list of specified length, and populates them with random
// numbers, and runs the sort function with the list
void runSortFunc(void (*sort)(int *list, size_t length), size_t length, int max)
{
  int *list = generateList(length, max);
  printList(list, LENGTH, "origin");
  sort(list, LENGTH);
  printList(list, LENGTH, "insertion sort");
  test(list, LENGTH);
  free(list);
}

int *generateList(int length, int max)
{
  int *list = malloc(sizeof(int) * length);

  // Initialise list with random numbers
  for (size_t i = 0; i < length; i++)
  {
    list[i] = randomInt(max);
  }

  return list;
}

// Generate random integer between 0 and max
int randomInt(int max)
{
  return rand() % max;
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

// Test if the list is in sorted order (ascending)
void test(int list[], size_t length)
{
  bool pass = true;
  for (size_t i = 1; i < length; i++)
  {
    if (list[i] < list[i - 1])
    {
      pass = false;
      break;
    }
  }

  printf("result: %s\n", pass ? "pass" : "fail");
}