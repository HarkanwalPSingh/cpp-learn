// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  cout << left;
  cout << setw(16) << "bool:" << sizeof(bool) << " bytes\n";
  cout << setw(16) << "char:" << sizeof(char) << " bytes\n";
  cout << setw(16) << "short:" << sizeof(short) << " bytes\n";
  cout << setw(16) << "int:" << sizeof(int) << " bytes\n";
  cout << setw(16) << "long:" << sizeof(long) << " bytes\n";
  cout << setw(16) << "long long:" << sizeof(long long) << " bytes\n";
  cout << setw(16) << "float:" << sizeof(float) << " bytes\n";
  cout << setw(16) << "double:" << sizeof(double) << " bytes\n";
  cout << setw(16) << "long double:" << sizeof(long double) << " bytes\n";

  int x;
  cout << setw(16) << "int variable:" << sizeof(x) << " bytes\n";

  return 0;
}
