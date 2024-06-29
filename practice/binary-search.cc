// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool binarySearch(vector<int>& numbers, int target);

int main() {

  string input;
  vector<int> numbers;

  cout << "Enter input arr separated by spaces" << '\n';
  getline(cin, input);
  stringstream ss(input);

  int num;
  while (ss >> num) {
    numbers.push_back(num);
  }

  sort(numbers.begin(), numbers.end());

  int target;
  cout << "Enter the integer you want to search" << '\n';
  cin >> target;

  if (binarySearch(numbers, target)) {
    cout << target << " found in input array" << '\n';
  } else {
    cout << target << " NOT found in input array" << '\n';
  }

  return 0;
}

bool binarySearch(vector<int>& numbers, int target){
  int left = 0;
  int right = numbers.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (numbers[mid] == target) {
      return true;
    } else if (numbers[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return false;
}
