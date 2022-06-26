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

int *generateList(int length);
int randomInt(int max);
void runSortFunc(void (*sort)(int *list, size_t length), size_t length);
void printList(int list[], int length, char label[]);
void test(int list[], size_t length);

int main(void)
{
  // Seed random value generator
  srand(time(NULL));

  runSortFunc(insertion_sort, LENGTH);

  return EXIT_SUCCESS;
}

int *generateList(int length)
{
  int *list = malloc(sizeof(int) * LENGTH);

  // Initialise list with random numbers
  for (size_t i = 0; i < LENGTH; i++)
  {
    list[i] = randomInt(MAX);
  }

  return list;
}

// Generate random integer between 0 and max
int randomInt(int max)
{
  return rand() % max;
}

void runSortFunc(void (*sort)(int *list, size_t length), size_t length)
{
  int *list = generateList(length);
  printList(list, LENGTH, "origin");
  sort(list, LENGTH);
  printList(list, LENGTH, "insertion sort");
  test(list, LENGTH);
  free(list);
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