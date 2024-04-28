// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<string> getNames();
void sortNames(vector<string>&);
void printNames(vector<string>&);

int main() {

  vector<string> names = getNames();
  sortNames(names);
  printNames(names);

  return 0;
}

vector<string> getNames() {

  cout << "Enter names to be sorted: ";

  string input;
  getline(cin, input);

  stringstream ss(input);
  string name;
  vector<string> names {};

  while (getline(ss, name, ' ')) {
    names.push_back(name);
  }

  return names;
}

void sortNames(vector<string>& names) {
  sort(names.begin(), names.end());
}

void printNames(vector<string>& names) {

  for (string name: names) {
    cout << name << ' ';
  }
  cout << '\n';
}
