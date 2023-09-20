#include <iostream>
#include "lib.h"

int main() {

   std::string a, b;
   std::cout << "a: ";
   std::cin >> a;
   std::cout << "b: ";
   std::cin >> b;
   std::cout << count_of_units_in_range_of_bin_nums(a, b) << std::endl;
   return 0;
}
