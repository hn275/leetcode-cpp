/*  contains_duplicate.cpp

    Contains Duplicate
    https://leetcode.com/problems/contains-duplicate/

    - Given an integer array nums, return true if any value appears at least
      twice in the array, and return false if every element is distinct.

    Hal N - 2022-10-16
*/

#include <iostream>
#include <set>
#include <vector>

using std::vector;

bool containsDuplicate(vector<int> &nums) {

  std::set<int> nums2{nums.begin(), nums.end()};

  if (nums.size() != nums2.size()) {
    return true;
  }

  return false;
}

int main() {
  vector<vector<int>> tests{
      {1, 2, 3, 4}, {1, 2, 3, 1}, {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}};

  for (auto test : tests) {
    std::cout << "Tests for the vector [ ";
    for (auto el : test) {
      std::cout << el << " ";
    }
    std::cout << "]: " << (containsDuplicate(test) == true ? "true" : "false")
              << std::endl;
  }
  return 0;
}
