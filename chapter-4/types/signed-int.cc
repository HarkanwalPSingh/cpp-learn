// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

int main() {

  // no need to add int prefix for short, long, long long types
  // By default integrals are signed
  // signed int is same as int
  short s;
  int i;
  long l;
  long long ll;

  // showcasing overflow
  std::cout << "Showcasing integer overflow" << '\n';
  int x { 2'147'483'647 };
  std::cout << x << '\n';

  x = x + 1; // integer overflow, undefined
  std::cout << x << '\n';

  // showcasing division always giving int return
  std::cout << "Showcasing division" << '\n';

  std::cout << 20/4 << '\n';
  std::cout << 21/4 << '\n';

  return 0;
}
