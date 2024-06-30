// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int execute(string variable, int initialVal) {
  if (variable[0] == '+' || (variable[2] == '+')) {
    return initialVal + 1;
  } else {
    return initialVal - 1;
  }
}

void solve() {
    int n;
    cin >> n;

    string variable;
    int result = 0;
    for (int i = 0; i < n; ++i) {
      cin >> variable;
      result = execute(variable, result);
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
