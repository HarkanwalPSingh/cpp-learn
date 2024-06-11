// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

using namespace std;

int countOnes(int num);

int main() {

  cout << "Enter number to count number of 1's in its bits" << '\n';

  int num {};
  cin >> num;

  cout << "Number of ones in bits of " << num << " are " << countOnes(num) << '\n';

  return 0;
}

int countOnes(int num) {
  // num = 23 - 10111
  // num & num - 1 = 10111 & 10110 = 10110 = 22
  // 22 & 21 = 10110 & 10101 = 10100 = 20
  // 20 & 19 = ...
  int count {};
  while ( num ) {
    num = num & (num - 1);
    count++;
  }

  return count;
}
