// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

string processString(string value);

void solve() {
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; ++i) {
      cin >> word;
      cout << processString(word) << endl;
    }

    cout << endl;
}

string processString(string value) {

  string result;
  if (value.length() > 10) {
    result += value.front();
    result += to_string(value.length() - 2);
    result += value.back();
  } else {
    result = value;
  }

  return result;
}

int main(int argc, char *argv[]) {
    FAST_IO;
    if (argc > 1) {
      freopen(argv[1], "r", stdin);
    }

    int t = 1;
    while (t--) {
      solve();
    }

    return 0;
}
