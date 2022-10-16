/* palindrome_number.cpp

    PALINDROME NUMBER
    https://leetcode.com/problems/palindrome-number/

    - Given an integer x, return true if x is palindrome integer. An integer is
      a palindrome when it reads the same backward as forward.
    - For example, 121 is a palindrome while 123 is not.

    Hal N - 2022-10-15
*/

#include <iostream>
#include <vector>

bool isPalindrome(int x) {
  // Edge cases
  if (x < 0) {
    return false;
  }
  if (x >= 0 && x < 10) {
    return true;
  }
  if (x % 10 == 0) {
    return false;
  }

  // Split numbers
  std::vector<int> remainders{};
  int r{};
  while (x > 1) {
    r = x % 10;
    remainders.push_back(r);
    x /= 10;
  }
  if (x != 0) {
    remainders.push_back(x);
  }

  for (int i{0}; i < static_cast<int>(remainders.size()); i++) {
    int j{static_cast<int>(remainders.size() - 1) - i};

    if (i == j || i > j) {
      break;
    }

    if (remainders.at(i) != remainders.at(j)) {
      return false;
    }
  }

  return true;
}

int main() {

  std::vector<int> test_cases{121, -121, 10, 123, 313};
  for (int i : test_cases) {
    std::cout << "Test case: " << i << " - "
              << (isPalindrome(i) == 1 ? "true" : "false") << std::endl;
  }

  return 0;
}
