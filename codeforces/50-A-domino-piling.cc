// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {

    int length, breadth;
    cin >> length;
    cin >> breadth;

    if (breadth > length) {
      swap(breadth, length);
    }

    int result = 0;
    result += (length / 2) * breadth;

    if (length % 2 == 1) {
      result += breadth / 2;
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
