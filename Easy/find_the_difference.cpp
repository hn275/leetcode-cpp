/* find_the_difference.cpp

    FIND THE DIFFERENCE
    https://leetcode.com/problems/find-the-difference/

    - You are given two strings s and t. String t is generated by random
     shuffling string s and then add one more letter at a random position.
    - Return the letter that was added to t.

    Hal N - 2022-10-15
*/

#include <iostream>
#include <string>

using std::string;

char findTheDifference(string s, string t) {
  for (auto i{s.begin()}; i != s.end(); i++) {
    for (auto j{t.begin()}; j != t.end(); j++) {
      if (*i == *j) {
        *i = '_';
        *j = '_';
        continue;
      }
    }
  }
  for (auto i : t) {
    if (i != '_') {
      return i;
    }
  }
  return ' '; // dummy return, since `i` is guaranteed to be returned
}

int main() {
  string s{"abcd"};
  string t{"abcde"};
  std::cout << findTheDifference(s, t) << std::endl;
  return 0;
}