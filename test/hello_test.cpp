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

TEST(ConversionToStrTest_1, BasicAssertions) {
   // arrange
   Decimal num, ans("123");

   // act
   bool res = num._conversion_to_decimal(123) == ans;

   // assert
   EXPECT_EQ(res, true);
}

TEST(ConstructorTest_1, BasicAssertions) {
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

TEST(ConstructorTest_3, BasicAssertions) {
   // arrange
   Decimal num;

   // act

   // assert
   EXPECT_EQ(num.get_array(), nullptr);
}

TEST(ConstructorTest_4, BasicAssertions) {
   // arrange
   Decimal num("234");
   int res;

   // act
   res = num.get_size();

   // assert
   EXPECT_EQ(res, 3);
}

TEST(ConstructorTest_5, BasicAssertions) {
   // arrange
   Decimal num("234");

   // act

   // assert
   EXPECT_EQ(num.get_array()[0], '4');
}

TEST(ConstructorTest_6, BasicAssertions) {
   // arrange
   Decimal num("234");

   // act

   // assert
   EXPECT_EQ(num.get_array()[1], '3');
}

TEST(ConstructorTest_7, BasicAssertions) {
   // arrange
   Decimal num("234");

   // act

   // assert
   EXPECT_EQ(num.get_array()[2], '2');
}

TEST(ConstructorTest_8, BasicAssertions) {
   // arrange
   std::initializer_list<unsigned char> t = {'1', '2'};
   Decimal num(t);

   // act

   // assert
   EXPECT_EQ(num.get_size(), 2);
}

TEST(ConstructorTest_9, BasicAssertions) {
   // arrange
   std::initializer_list<unsigned char> t = {'1', '2'};
   Decimal num(t);

   // act

   // assert
   EXPECT_EQ(num.get_array()[0], '2');
}

TEST(ConstructorTest_10, BasicAssertions) {
   // arrange
   std::initializer_list<unsigned char> t = {'1', '2'};
   Decimal num(t);

   // act

   // assert
   EXPECT_EQ(num.get_array()[1], '1');
}

TEST(ConstructorTest_12, BasicAssertions) {
   // arrange
   unsigned char t = '1';
   int n = 2;

   // act
   Decimal num(n, t);

   // assert
   EXPECT_EQ(num.get_size(), n);
}

TEST(ConstructorTest_13, BasicAssertions) {
   // arrange
   unsigned char t = '1';
   int n = 2;

   // act
   Decimal num(n, t);

   // assert
   EXPECT_EQ(num.get_array()[0], t);
}

TEST(ConstructorTest_14, BasicAssertions) {
   // arrange
   unsigned char t = '1';
   int n = 2;

   // act
   Decimal num(n, t);

   // assert
   EXPECT_EQ(num.get_array()[1], t);
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
   EXPECT_EQ(res.get_array()[0], '4');
}

TEST(OperatorPlusTest_2, BasicAssertions) {
   // arrange
   Decimal num1("11"), num2("23");

   // act
   Decimal res = num1 + num2;

   // assert
   EXPECT_EQ(res.get_array()[1], '3');
}

TEST(OperatorMinusTest_1, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   Decimal res = num1 - num2;

   // assert
   EXPECT_EQ(res.get_array()[0], '3');
}

TEST(OperatorMinusTest_2, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   Decimal res = num1 - num2;

   // assert
   EXPECT_EQ(res.get_array()[1], '1');
}

TEST(OperatorPlusEqualTest_1, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("20");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1.get_array()[0], '3');
}

TEST(OperatorPlusEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("20");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1.get_array()[1], '4');
}

TEST(OperatorPlusEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1.get_array()[0], '2');
}

TEST(OperatorPlusEqualTest_4, BasicAssertions) {
   // arrange
   Decimal num1("3"), num2("9");

   // act
   num1 += num2;

   // assert
   EXPECT_EQ(num1.get_array()[1], '1');
}

TEST(OperatorPlusEqualTest_5, BasicAssertions) {
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
   EXPECT_EQ(num1.get_array()[0], '3');
}

TEST(OperatorMinusEqualTest_2, BasicAssertions) {
   // arrange
   Decimal num1("23"), num2("10");

   // act
   num1 -= num2;

   // assert
   EXPECT_EQ(num1.get_array()[1], '1');
}

TEST(OperatorMinusEqualTest_3, BasicAssertions) {
   // arrange
   Decimal num1("24"), num2("21");

   // act
   num1 -= num2;

   // assert
   EXPECT_EQ(num1.get_array()[0], '3');
}

TEST(OperatorMinusEqualTest_4, BasicAssertions) {
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
   EXPECT_EQ(num1.get_array()[0], '6');
}

TEST(Func__get_array__Test_2, BasicAssertions) {
   // arrange
   Decimal num1("56");

   // act

   // assert
   EXPECT_EQ(num1.get_array()[1], '5');
}
