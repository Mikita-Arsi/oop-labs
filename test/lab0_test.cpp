#include <gtest/gtest.h>
#include "lib.h"

TEST(ExampleTest, BasicAsExasertions) {
   // arrange
   int a{2}, b{7}, res;

   // act
   res = count_of_non_zero_bits_in_range(a, b);

   // assert
   EXPECT_EQ(res, 11);
}

TEST(NegativeErrTest_a, BasicAsExasertions) {
   // arrange
   int a{-3}, b{7}, res;

   // act

   // assert
   EXPECT_THROW(count_of_non_zero_bits_in_range(a, b), std::invalid_argument);
}

TEST(NegativeErrTest_b, BasicAsExasertions) {
   // arrange
   int a{2}, b{-7}, res;

   // act

   // assert
   EXPECT_THROW(count_of_non_zero_bits_in_range(a, b), std::invalid_argument);
}

TEST(CompareErrTest, BasicAsExasertions) {
   // arrange
   int a{8}, b{7}, res;

   // act

   // assert
   EXPECT_THROW(count_of_non_zero_bits_in_range(a, b), std::out_of_range);
}
TEST(Func__validate_nums__NegativeErrTest_a, BasicAsExasertions) {
   // arrange
   int a{-8}, b(7);

   // act

   // assert
   EXPECT_THROW(validate_nums(a, b), std::invalid_argument);
}

TEST(Func__validate_nums__NegativeErrTest_b, BasicAsExasertions) {
   // arrange
   int a{2}, b(-7);

   // act

   // assert
   EXPECT_THROW(validate_nums(a, b), std::invalid_argument);
}

TEST(Func__validate_nums__CompareErrTest, BasicAsExasertions) {
   // arrange
   int a{8}, b(7);

   // act

   // assert
   EXPECT_THROW(validate_nums(a, b), std::out_of_range);
}

TEST(Func__pow2__Test1, BasicAsExasertions) {
   // arrange
   int power{0}, res;

   // act
   res = pow2(power);

   // assert
   EXPECT_EQ(res, 1);
}

TEST(Func__pow2__Test2, BasicAsExasertions) {
   // arrange
   int power{1}, res;

   // act
   res = pow2(power);

   // assert
   EXPECT_EQ(res, 2);
}

TEST(Func__pow2__Test3, BasicAsExasertions) {
   // arrange
   int power{2}, res;

   // act
   res = pow2(power);

   // assert
   EXPECT_EQ(res, 4);
}

TEST(Func__pow2__Test4, BasicAsExasertions) {
   // arrange
   int power{3}, res;

   // act
   res = pow2(power);

   // assert
   EXPECT_EQ(res, 8);
}

TEST(Func__not_equal_reminder__Test1, BasicAsExasertions) {
   // arrange
   int num{11}, power{1}, res;

   // act
   res = not_equal_reminder(num, power);

   // assert
   EXPECT_EQ(res, true);
}

TEST(Func__not_equal_reminder__Test2, BasicAsExasertions) {
   // arrange
   int num{11}, power{2}, res;

   // act
   res = not_equal_reminder(num, power);

   // assert
   EXPECT_EQ(res, false);
}

TEST(Func__not_equal_reminder__Test3, BasicAsExasertions) {
   // arrange
   int num{8}, power{2}, res;

   // act
   res = not_equal_reminder(num, power);

   // assert
   EXPECT_EQ(res, false);
}

TEST(Func__not_equal_reminder__Test4, BasicAsExasertions) {
   // arrange
   int num{8}, power{3}, res;

   // act
   res = not_equal_reminder(num, power);

   // assert
   EXPECT_EQ(res, true);
}

TEST(Func__calculating_the_range_difference__Test1, BasicAsExasertions) {
   // arrange
   int a{2}, b{8}, res;

   // act
   res = calculating_the_range_difference(a, b);

   // assert
   EXPECT_EQ(res, 11);
}

TEST(Func__calculating_the_range_difference__Test2, BasicAsExasertions) {
   // arrange
   int a{0}, b{2}, res;

   // act
   res = calculating_the_range_difference(a, b);

   // assert
   EXPECT_EQ(res, 1);
}

TEST(Func__calculating_the_range_difference__Test3, BasicAsExasertions) {
   // arrange
   int a{10}, b{12}, res;

   // act
   res = calculating_the_range_difference(a, b);

   // assert
   EXPECT_EQ(res, 5);
}

TEST(Func__add_iteration__Test1, BasicAsExasertions) {
   // arrange
   int num{6}, power{1}, res;

   // act
   res = add_iteration(num, power);

   // assert
   EXPECT_EQ(res, 3);
}

TEST(Func__add_iteration__Test2, BasicAsExasertions) {
   // arrange
   int num{6}, power{2}, res;

   // act
   res = add_iteration(num, power);

   // assert
   EXPECT_EQ(res, 4);
}

TEST(Func__add_iteration__Test3, BasicAsExasertions) {
   // arrange
   int num{9}, power{3}, res;

   // act
   res = add_iteration(num, power);

   // assert
   EXPECT_EQ(res, 5);
}