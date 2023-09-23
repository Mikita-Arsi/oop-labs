#include <iostream>

int pow2(int n) { return 1 << n; }

int not_equal_reminder(int num, int power) {
   return num % pow2(power) != num % pow2(power + 1);
}

int add_iteration(int num, int power) {
   int add_result{0};
   add_result += num / pow2(power) * (pow2(power - 1));
   if (not_equal_reminder(num, power)) {
      add_result += num % pow2(power);
   }
   return add_result;
}

int calculating_the_range_difference(int a, int b) {
   int result_a{0}, result_b{0};
   for (int power{1}; pow2(power) <= b; power++) {
      if (pow2(power) <= a) {
         result_a += add_iteration(a, power);
      }
      result_b += add_iteration(b, power);
   }
   return result_b - result_a;
}

void validate_nums(int a, int b) {
   if (a < 0 || b < 0) {
      throw std::invalid_argument("Invalid input, number must be unsignused");
   }
   if (a >= b) {
      throw std::out_of_range("Number \"b\" must be more than number \"a\"");
   }
}

int count_of_non_zero_bits_in_range(int a, int b) {
   validate_nums(a, b);
   return calculating_the_range_difference(a, b + 1);
}
