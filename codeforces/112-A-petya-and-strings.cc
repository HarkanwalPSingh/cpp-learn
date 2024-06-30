// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <cctype>
#include <cstddef>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    // Read input and solve the problem here
    string first, second;
    cin >> first;
    cin >> second;

    int n = first.length();
    int result = 0, diff;
    char firstChar, secondChar;
    for (size_t i = 0; i < n; ++i) {
      firstChar = tolower(first[i]);
      secondChar = tolower(second[i]);
      diff = firstChar - secondChar;
      if (diff != 0) {
        if (diff > 0) {
          result = 1;
        } else {
          result = -1;
        }
        break;
      }
    }

    cout << result << endl;
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
