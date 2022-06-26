#include <stdio.h>

/**
 * Time complexity:
 *  Worst: O(n^2)
 *  Best: O(1)
 * 
 * Space complexity: O(1)
 */
void insertion_sort(int list[], size_t n)
{
  for (size_t i = 1; i < n; i++) // n
  {
    int key = list[i];
    size_t j = i - 1;
    while (j >= 0 && list[j] > key) // executed between 1 (best case) and n (worst case)
    {
      list[j + 1] = list[j];
      j--;
    }
    list[j + 1] = key;
  }
}