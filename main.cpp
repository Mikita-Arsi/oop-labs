#include <iostream>
#include "lib.h"

int main() {

   int a{-1}, b{-1};
   std::cout << "a: ";
   std::cin >> a;
   std::cout << "b: ";
   std::cin >> b;
   std::cout << count_of_non_zero_bits_in_range(a, b) << std::endl;
   return 0;
}
