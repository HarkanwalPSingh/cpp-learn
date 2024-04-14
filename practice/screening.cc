// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <algorithm> // Include algorithm header for std::find
#include <iostream>
#include <vector>
using namespace std;

int generatePasscodes(vector<int> &passcode, int index,
                      const vector<int> &knownDigits,
                      const vector<int> &requiredDigits) {
  if (index == 6) {
    bool containsRequiredDigits = true;
    for (int digit : requiredDigits) {
      if (find(passcode.begin(), passcode.end(), digit) == passcode.end()) {
        containsRequiredDigits = false;
        break;
      }
    }
    if (containsRequiredDigits) {
      for (int digit : passcode) {
        cout << digit;
      }
      cout << endl;
      return 1;
    }
    return 0;
  }

  int totalCount = 0;
  for (int digit : knownDigits) {
    passcode[index] = digit;
    totalCount +=
        generatePasscodes(passcode, index + 1, knownDigits, requiredDigits);
  }
  return totalCount;
}

int main() {
  vector<int> knownDigits = {3, 4, 5};
  vector<int> requiredDigits = knownDigits;

  vector<int> passcode(6);

  int totalCount = generatePasscodes(passcode, 0, knownDigits, requiredDigits);

  cout << "Total count: " << totalCount << endl;

  return 0;
}
