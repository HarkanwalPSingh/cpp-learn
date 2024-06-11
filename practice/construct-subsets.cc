// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <cstddef>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

vector<vector<char>> generateSubsets(vector<char>);

int main(){

  string input;
  vector<char> charArray;

  cout << "Enter char array separated by space: ";
  getline(cin, input);
  stringstream ss(input);

  char ch;
  while (ss >> ch) {
    charArray.push_back(ch);
  }

  vector<vector<char>> subsets {generateSubsets(charArray)};

  cout << "Generated subsets are: " << '\n';
  for (const auto& subset : subsets) {
    cout << "[";
    for (size_t i = 0; i < subset.size(); ++i) {
      cout << subset[i];
    }
    cout << "]\n";
  }

  return 0;
}

vector<vector<char>> generateSubsets(vector<char> charArray) {
  vector<vector<char>> subsets;

  char ch;
  size_t numSubsets = 1 << charArray.size();
  for (size_t i = 0; i < numSubsets; ++i) {
    vector<char> temp;
    for (size_t j = 0; j < charArray.size(); ++j) {
      if (i & (1 << j)) {
        temp.push_back(charArray[j]);
      }
    }
    subsets.push_back(temp);
  }

  return subsets;
}
