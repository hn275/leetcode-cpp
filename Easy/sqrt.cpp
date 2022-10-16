/*  sqrt.cpp

    Sqrt(x)
    https://leetcode.com/problems/sqrtx/

    - Given a non-negative integer x, compute and return the square root of x.
   Since the return type is an integer, the decimal digits are truncated, and
   only the integer part of the result is returned.
    - Note: You are not allowed to use any built-in exponent function or
   operator, such as pow(x, 0.5) or x ** 0.5.

    Hal N - 2022-10-16
*/

#include <iostream>

int mySqrt(int x) {

  if (x == 1 || x == 0) {
    return x;
  }

  double sqrt{1};
  for (double i{0}; i < x; i++) {
    std::cout << i * i << std::endl;
    if (i * i > x) {
      return sqrt;
    }
    sqrt = i;
  }
  return sqrt;
}

int main() {

  int x{4};
  int sqrt{mySqrt(x)};
  std::cout << sqrt << std::endl;
  return 0;
}
