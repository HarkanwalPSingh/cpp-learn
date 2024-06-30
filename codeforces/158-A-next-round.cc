// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    int result = 0;
    if (arr[k-1] != 0) {
      result += k;
      int i = k;
      while (i < n && arr[i] == arr[k-1]) {
        result += 1;
        i++;
      }
    } else {
      int i = k - 2;
      while (i >= 0) {
        if (arr[i] != 0) {
          result += (i+1);
          break;
        }
        i--;
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
