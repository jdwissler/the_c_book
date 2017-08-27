// Exercise 1.5

// Input a number and print it in hexadecimal, binary, and decimal
// format.

// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>
#include <stdbool.h>

#define ASCII_ZERO 48

int get_int() {
  int integer_value = 0;
  char c;

  while ((c = getchar()) != '\n') {
    integer_value = (integer_value * 10) + (c - ASCII_ZERO);
  }

  return integer_value;
}

#define BUF_MAX 32 // I.e 32 bits

// See http://www.cs.trincoll.edu/~ram/cpsc110/inclass/conversions.html
void print_base(int n, int b, char* digits) {
  char buf[BUF_MAX] = {0};
  int i = 0;
  while (n) {
    buf[i++] = digits[n % b];
    n /= b;
  }

  // Since each digit is calculated in reverse we need to print the
  // result in reverse.
  while (i >= 0) {
    printf("%c", buf[i--]);
  }
}

void print_decimal(int num) {
  static char map[] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  };
  printf("Decimal: ");
  print_base(num, 10, map);
  printf("\n");
}

void print_hexadecimal(int num) {
  static char map[] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'A', 'B', 'C', 'D', 'E', 'F'
  };

  printf("Hexadecimal: ");
  print_base(num, 16, map);
  printf("\n");
}

void print_binary(int num) {
  static char map[] = { '0', '1' };
  printf("Binary: ");
  print_base(num, 2, map);
  printf("\n");
}

int main() {
  int num = get_int();

  printf("Got number %d\n", num);

  print_decimal(num);
  print_hexadecimal(num);
  print_binary(num);

  return 0;
}
