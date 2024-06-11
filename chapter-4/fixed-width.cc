// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <cstdint>

int main() {
  std::int8_t i8{0};
  std::int16_t i{0};
  std::int32_t j{0};
  std::int64_t k{0};
  std::cout << sizeof(i8) << '\n';
  std::cout << sizeof(i) << '\n';
  std::cout << sizeof(j) << '\n';
  std::cout << sizeof(k) << '\n';
  return 0;
}
