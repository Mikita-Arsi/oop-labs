#include <iostream>
#include "Decimal.h"

void print_array(unsigned char* arr, int n) {
   for (int i = n - 1; i > -1; i -= 1) {
      std::cout << arr[i];
   }
   std::cout << std::endl;
}

int main() {
   Decimal c("222"), a("23");
   Decimal& a_a = a;
   Decimal b(a_a);
   print_array(a.get_array(), a.get_size());
   print_array(b.get_array(), b.get_size());
   print_array(c.get_array(), c.get_size());
   return 0;
}