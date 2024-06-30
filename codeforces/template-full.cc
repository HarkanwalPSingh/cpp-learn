// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (int)(v.size())
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;

void solve() {
  // Read input and solve the problem here
  int n;
  cin >> n;
  vi arr(n);
  FOR(i, 0, n) {
    cin >> arr[i];
  }
  // Example processing
  sort(all(arr));
  FOR(i, 0, n) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  FAST_IO;
  if (argc > 1) {
    // Handling input from command line arguments
    freopen(argv[1], "r", stdin);
  }

  int t = 1; // Number of test cases
  // cin >> t; // Uncomment if the number of test cases is given in the input
  while (t--) {
    solve();
  }

  return 0;
}
