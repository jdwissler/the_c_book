// A simple program that prints 'prime pairs' which only differ by 2. (i.e 29, 31 or 11, 13)
// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_PRIME 10000

int main() {
  int last_prime = 0;
  int divisor = 0;
  bool is_prime = false;

  for (int check = 3; check < MAX_PRIME; ++check) {
    divisor = check / 2; // This is naive
    is_prime = true;

    while (divisor > 1) {
      if ((check % divisor) == 0) {
        is_prime = false;
        break;
      }
      divisor--;
    }

    if (is_prime) {
      if ((check - last_prime) == 2) {
        printf("Prime pair (with difference of 2): %d, %d\n", last_prime, check);
      }
      last_prime = check;
    }
  }

  return 0;
}
