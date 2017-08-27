// Exercise 1.3
// Returns the decimal value for a stream of digits (0-9) passed in via getchar
// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>

#define ASCII_ZERO 48
int main() {
  int integer_value = 0;
  char c;

  while ((c = getchar()) != '\n') {
    integer_value = (integer_value * 10) + (c - ASCII_ZERO);
  }

  printf("Got integer value: %d\n", integer_value);
  return integer_value;
}
