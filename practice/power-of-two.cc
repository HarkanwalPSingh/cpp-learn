// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <stdio.h>

using namespace std;

bool isPowerOfTwo(int num) {
  // 4: 100
  // 3: 011
  // 4 & 3 = 0

  return (num && !(num & (num - 1)));
}

int main() {

  int num {};
  cout << "Check if the number is power of 2" << '\n';
  cin >> num;

  if (isPowerOfTwo(num)) {
    cout << "The number " << num << " is power of 2" << '\n';
  } else {
    cout << "The number " << num << " is NOT a power of 2" << '\n';
  }

  return 0;
}
