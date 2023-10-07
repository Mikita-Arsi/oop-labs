#pragma once
#include <string>

class Decimal {
  private:
   unsigned char* _array;
   int _size;
   void _validate_char_param(unsigned char symbol);
   int _conversion_to_int(unsigned char* arr, int size);
   Decimal _conversion_to_decimal(int value);
   std::string _array_to_str();

  public:
   Decimal();
   Decimal(const size_t& n, unsigned char t);
   Decimal(const std::initializer_list<unsigned char>& t);
   Decimal(const std::string& t);
   Decimal(const Decimal& other);
   Decimal(Decimal&& other) noexcept;

   virtual ~Decimal() noexcept;

   Decimal operator=(const Decimal& other);
   Decimal operator+(const Decimal& other);
   Decimal operator-(const Decimal& other);
   Decimal operator+=(const Decimal& other);
   Decimal operator-=(const Decimal& other);

   bool operator==(const Decimal& other);
   bool operator>=(const Decimal& other);
   bool operator<=(const Decimal& other);
   bool operator!=(const Decimal& other);
   bool operator>(const Decimal& other);
   bool operator<(const Decimal& other);

   int get_size();
   unsigned char* get_array();

   friend class ValidationTest_1_BasicAssertions_Test;
   friend class ValidationTest_2_BasicAssertions_Test;
   friend class ValidationTest_3_BasicAssertions_Test;
   friend class ConversionToIntTest_1_BasicAssertions_Test;
   friend class ConversionToStrTest_1_BasicAssertions_Test;
   friend class Func__array_to_str__Test_BasicAssertions_Test;
   friend class ConstructorTest_4_BasicAssertions_Test;
   friend class ConstructorTest_6_BasicAssertions_Test;
   friend class ConstructorTest_8_BasicAssertions_Test;
   friend class OperatorPlusTest_1_BasicAssertions_Test;
   friend class OperatorMinusTest_1_BasicAssertions_Test;
   friend class OperatorPlusEqualTest_1_BasicAssertions_Test;
   friend class OperatorPlusEqualTest_2_BasicAssertions_Test;
   friend class OperatorMinusEqualTest_1_BasicAssertions_Test;
   friend class Func__get_array__Test_1_BasicAssertions_Test;
};