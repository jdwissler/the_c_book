// A simple program that prints 'prime pairs'. (i.e 29, 31 or 11, 13)
// Author: John D. Wissler
// Date: Sun Aug 27 2017

#include <stdio.h>
#include <stdlib.h>
int main() {
  int this_number, divisor, not_prime;
  this_number = 3;
  while(this_number < 10000){
    divisor = this_number / 2;
    not_prime = 0;
    while(divisor > 1){
      if(this_number % divisor == 0){
        not_prime = 1;
        divisor = 0;
      }
      else
        divisor = divisor-1;
    }
    if(not_prime == 0)
      printf("%d is a prime number\n", this_number);
    this_number = this_number + 1;
  }
  exit(EXIT_SUCCESS);
}
