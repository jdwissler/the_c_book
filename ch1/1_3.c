// Exercise 1.3

// Write a function which returns the decimal value for a stream of
// digits (0-9) passed in via getchar

// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>
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
  int return_val = get_int();
  printf("Got integer value: %d\n", return_val);
  return return_val;
}
