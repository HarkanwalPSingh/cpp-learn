// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

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
    int n;
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; ++i) {
      int totalCount = 0;
      int counter;
      for (int j = 0; j < 3; ++j) {
        cin >> counter;
        totalCount += counter;
      }
      if (totalCount > 1) {
        result += 1;
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
