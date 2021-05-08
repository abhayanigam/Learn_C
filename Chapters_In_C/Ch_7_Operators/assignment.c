#include <stdio.h>

int main() {
  int a = 21;
  int c;

  c = a;
  printf("with = operator, value of c = %d\n", c);

  c += a; // equivalent to c = c + a
  printf("with += operator, value of c = %d\n", c);

  c -= a; // equivalent to c = c - a
  printf("with -= operator, value of c = %d\n", c);

  c *= a; // equivalent to c = c x a
  printf("with *= operator, value of c = %d\n", c);

  c /= a; // equivalent to c = c / a
  printf("with /= operator, value of c = %d\n", c);

  c = 200;
  c %= a; // equivalent to c = c % a
  printf("with modulus= operator, value of c = %d\n", c);

  c <<= a; // equivalent to c = c << a
  printf("with <<= operator, value of c = %d\n", c);

  c >>= a; // equivalent to c = c >> a
  printf("with >>= operator, value of c = %d\n", c);

  c &= a; // equivalent to c = c & a
  printf("with &= operator, value of c = %d\n", c);
  
  c ^= a; // equivalent to c = c ^ a
  printf("with ^= operator, value of c = %d\n", c);

  c |= a; // equivalent to c = c | a
  printf("with |= operator, value of c = %d\n", c);
}