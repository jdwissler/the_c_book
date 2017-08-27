// Exercise 1.5

// Input a number and print it in hexadecimal, binary, and decimal
// format.

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

void print_decimal(int num) {
}

void print_hexadecimal(int num) {
}

void print_binary(int num) {
}

int main() {
  int num = get_int();

  print_decimal(num);
  print_hexadecimal(num);
  print_binary(num);

  return 0;
}
