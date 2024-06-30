// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
  string input;
  cin >> input;

  vector<int> numbers;
  for (int i = 0; i < input.length(); i += 2) {
    numbers.push_back(input[i] - '0');
  }

  sort(numbers.begin(), numbers.end());

  bool first = true;
  for (int i = 0; i < numbers.size(); ++i) {
    if (!first) {
      cout << '+';
    }
    cout << numbers[i];
    first = false;
  }

  cout << endl;
}

int main(int argc, char *argv[]) {
  FAST_IO;
  if (argc > 1) {
    freopen(argv[1], "r", stdin);
  }

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
