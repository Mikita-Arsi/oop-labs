#include <iostream>
#include <typeinfo>

int search_num(std::string line) {
   int num;
   try {
      num = std::stoll(line);
   } catch (std::exception) {
      return -3;
   }

   if (num < 0) return -1;

   return num;
}

int check_nums(int a, int b) {
   if (a < 0) return a;
   if (b < 0) return b;
   if (a >= b) return -2;

   return 1;
}

int pow2(int n) { return 1 << n; }

int sum_of_units_before(int num) {
   int result{0};

   for (int power{1}; pow2(power) <= num; power++) {
      result += num / pow2(power) * (pow2(power - 1));
      if (num % (pow2(power)) != num % (pow2(power + 1))) {
         result += num % (pow2(power));
      }
   }
   return result;
}

int difference(int a, int b) {
   int check_nums_flag = check_nums(a, b);
   if (check_nums_flag != 1) return check_nums_flag;
   return sum_of_units_before(b + 1) - sum_of_units_before(a);
}

std::string raise_err(int err_code) {
   switch (err_code) {
      case -1:
         return "Number must be unsignused";

      case -2:
         return "Number \"b\" must be more than number \"a\"";

      case -3:
         return "Please, input number, not string";

      default:
         return "";
   }
}

std::string check_err_code(int res) {
   if (res < 0) return raise_err(res);
   return std::to_string(res);
}

std::string count_of_units_in_range_of_bin_nums(std::string a, std::string b) {
   int num1, num2;
   num1 = search_num(a);
   num2 = search_num(b);
   return check_err_code(difference(num1, num2));
}
