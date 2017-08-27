// Exercise 1.4

// Read in a sequence of numbers (using function in exercise 1.3) and
// sort them in ascending numerical order.

// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>
#include <stdbool.h>

#define SORT_SIZE 5
#define ASCII_ZERO 48

int get_int() {
  int integer_value = 0;
  char c;

  while ((c = getchar()) != '\n') {
    integer_value = (integer_value * 10) + (c - ASCII_ZERO);
  }

  return integer_value;
}

int main() {
  int to_sort[SORT_SIZE];

  for (int i = 0; i < SORT_SIZE; ++i) {
    to_sort[i] = get_int();
  }

  // Simple bubble sort...
  bool swapped = false;
  do {
    swapped = false;
    for (int i = 0; i < SORT_SIZE - 1; ++i) {
      if (to_sort[i + 1] < to_sort[i]) {
        int tmp = to_sort[i];
        to_sort[i] = to_sort[i + 1];
        to_sort[i + 1] = tmp;
        swapped = true;
      }
    }
  } while(swapped);

  printf("Print sorted list\n-----------------\n");

  for (int i = 0; i < SORT_SIZE; ++i) {
    printf("%d\n", to_sort[i]);
  }

  return 0;
}
