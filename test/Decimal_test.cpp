#include <gtest/gtest.h>
#include "Decimal.h"

TEST(ValidationTest_1, BasicAssertions) {
   // arrange
   Decimal num;

   // act

   // assert
   EXPECT_THROW(num._validate_char_param('v'), std::invalid_argument);
}

TEST(ValidationTest_2, BasicAssertions) {
   // arrange
   Decimal num;

   // act

   // assert
   EXPECT_NO_THROW(num._validate_char_param('0'));
}

TEST(ValidationTest_3, BasicAssertions) {
   // arrange
   Decimal num;

   // act

   // assert
   EXPECT_NO_THROW(num._validate_char_param('9'));
}

TEST(ConversionToIntTest_1, BasicAssertions) {
   // arrange
   Decimal num("123");

   // act

   // assert
   EXPECT_EQ(num._conversion_to_int(num.get_array(), num.get_size()), 123);
}

TEST(Func__array_to_str__Test, BasicAssertions) {
   // arrange
   Decimal num("123");
   std::string res;

   // act
   res = num._array_to_str();

   // assert
   EXPECT_EQ(res, "321");
}

TEST(ConversionToStrTest_1, BasicAssertions) {
   // arrange
   Decimal num, ans("123");

   // act
   bool res = num._conversion_to_decimal(123) == ans;

   // assert
   EXPECT_EQ(res, true);
}

TEST(SizeConstructorTest_1, BasicAssertions) {
   // arrange
   Decimal num;
   int res;

   // act
   res = num.get_size();

   // assert
   EXPECT_EQ(res, 0);
}

TEST(ConstructorTest_2, BasicAssertions) {
   // arrange
   Decimal num;

   // act

   // assert
   EXPECT_EQ(num.get_array(), nullptr);
}

TEST(SizeConstructorTest_3, BasicAssertions) {
   // arrange
   Decimal num("234");
   int res;

   // act
   res = num.get_size();

   // assert
   EXPECT_EQ(res, 3);
}

TEST(ConstructorTest_4, BasicAssertions) {
   // arrange
   Decimal num("234");
   std::string res;

   // act
   res = num._array_to_str();

   // assert
   EXPECT_EQ(res, "432");
}

TEST(SizeConstructorTest_5, BasicAssertions) {
   // arrange
   std::initializer_list<unsigned char> t = {'1', '2'};
   Decimal num(t);

   // act

   // assert
   EXPECT_EQ(num.get_size(), 2);
}

TEST(ConstructorTest_6, BasicAssertions) {
   // arrange
   std::initializer_list<unsigned char> t = {'1', '2'};
   Decimal num(t);
   std::string res;

   // act
   res = num._array_to_str();

   // assert
   EXPECT_EQ(res, "21");
}
TEST(SizeConstructorTest_7, BasicAssertions) {
   // arrange
   unsigned char t = '1';
   int n = 2;

   // act
   Decimal num(n, t);

   // assert
   EXPECT_EQ(num.get_size(), n);
}

TEST(ConstructorTest_8, BasicAssertions) {
   // arrange
   unsigned char t = '1';
   int n = 2;
   Decimal num(n, t);
   std::string res;

   // act
   res = num._array_to_str();

   // assert
   EXPECT_EQ(res, "11");
}

TEST(InheritanceTest_1, BasicAssertions) {
   // arrange
   Decimal num1("1");
   Decimal num2(num1);
   bool res;

   // act
   res = num1 == num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(IsEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("1"), num2("232");

   // act
   bool res = num1 == num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(IsEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("122"), num2("232");

   // act
   bool res = num1 == num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(IsEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("232"), num2("232");

   // act
   bool res = num1 == num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(IsEqualTest_4, BasicAssertions) {
   // arrange
   Decimal num1, num2;

   // act
   bool res = num1 == num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(IsNotEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("1"), num2("232");

   // act
   bool res = num1 != num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(IsNotEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("122"), num2("232");

   // act
   bool res = num1 != num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(IsNotEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("232"), num2("232");

   // act
   bool res = num1 != num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(IsNotEqualTest_4, BasicAssertions) {
   // arrange
   Decimal num1, num2;

   // act
   bool res = num1 != num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(OperatorPlusTest_1, BasicAssertions) {
   // arrange
   Decimal num1("11"), num2("23");

   // act
   Decimal res = num1 + num2;

   // assert
   EXPECT_EQ(res._array_to_str(), "43");
}

TEST(OperatorMinusTest_1, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   Decimal res = num1 - num2;

   // assert
   EXPECT_EQ(res._array_to_str(), "31");
}

TEST(OperatorPlusEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("20");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1._array_to_str(), "34");
}

TEST(OperatorPlusEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1._array_to_str(), "21");
}

TEST(SizeOperatorPlusEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1.get_size(), 2);
}

TEST(OperatorMinusEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   num1 -= num2;

   // assert
   EXPECT_EQ(num1._array_to_str(), "31");
}

TEST(SizeOperatorMinusEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   num1 -= num2;

   // assert
   EXPECT_EQ(num1.get_size(), 2);
}

TEST(OperatorMoreEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");
   bool res;

   // act
   res = num1 >= num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(OperatorMoreEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("9"), num2("3");
   bool res;

   // act
   res = num1 >= num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(OperatorLessEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");
   bool res;

   // act
   res = num1 <= num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(OperatorLessEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("9"), num2("9");
   bool res;

   // act
   res = num1 <= num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(OperatorMoreEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("9"), num2("9");
   bool res;

   // act
   res = num1 >= num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(OperatorLessTest_1, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");
   bool res;

   // act
   res = num1 < num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(OperatorLessTest_2, BasicAssertions) {
   // arrange
   Decimal num1("9"), num2("3");
   bool res;

   // act
   res = num1 < num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(OperatorMoreTest_1, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");
   bool res;

   // act
   res = num1 > num2;

   // assert
   EXPECT_EQ(res, false);
}

TEST(OperatorMoreTest_2, BasicAssertions) {
   // arrange
   Decimal num1("9"), num2("3");
   bool res;

   // act
   res = num1 > num2;

   // assert
   EXPECT_EQ(res, true);
}

TEST(Func__get_size__Test, BasicAssertions) {
   // arrange
   int n = 4;
   unsigned char t = '2';
   Decimal num1(n, t);
   int res;

   // act
   res = num1.get_size();

   // assert
   EXPECT_EQ(res, n);
}

TEST(Func__get_array__Test_1, BasicAssertions) {
   // arrange
   Decimal num1("56");

   // act

   // assert
   EXPECT_EQ(num1._array_to_str(), "65");
}
