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

    int ROW, COL;
    int temp = 0;
    for (int i = 1; i <= 5; ++i) {
      for (int j = 1; j <= 5; ++j) {
        cin >> temp;
        if (temp == 1) {
          ROW = i;
          COL = j;
        }
      }
    }

    cout << abs(3 - ROW) + abs(3 - COL) << endl;
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
