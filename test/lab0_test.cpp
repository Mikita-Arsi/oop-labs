#include <gtest/gtest.h>
#include <string>
#include "lib.h"

TEST(ExampleTest, BasicAsExasertions) {
   // arrange
   std::string a{"2"}, b{"7"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "11");
}

TEST(NegativeErrTest_a, BasicAsExasertions) {
   // arrange
   std::string a{"-3"}, b{"7"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "Number must be unsignused");
}

TEST(NegativeErrTest_b, BasicAsExasertions) {
   // arrange
   std::string a{"3"}, b{"-7"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "Number must be unsignused");
}

TEST(CompareErrTest, BasicAsExasertions) {
   // arrange
   std::string a{"8"}, b{"7"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "Number \"b\" must be more than number \"a\"");
}

TEST(InputStringErrTest_a, BasicAsExasertions) {
   // arrange
   std::string a{"a"}, b{"7"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "Please, input number, not string");
}

TEST(InputStringErrTest_b, BasicAsExasertions) {
   // arrange
   std::string a{"2"}, b{"a"}, err{""}, res;

   // act
   res = count_of_units_in_range_of_bin_nums(a, b);

   // assert
   EXPECT_EQ(res, "Please, input number, not string");
}

TEST(Func__search_num__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(search_num("0"), 0);
   EXPECT_EQ(search_num("1"), 1);
   EXPECT_EQ(search_num("-1"), -1);
   EXPECT_EQ(search_num("-2"), -1);
   EXPECT_EQ(search_num("-3"), -1);
   EXPECT_EQ(search_num("fle"), -3);
   EXPECT_EQ(search_num(""), -3);
   EXPECT_EQ(search_num("100"), 100);
}

TEST(Func__check_nums__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(check_nums(2, 7), 1);
   EXPECT_EQ(check_nums(0, 1), 1);
   EXPECT_EQ(check_nums(10, 11), 1);
   EXPECT_EQ(check_nums(-1, 11), -1);
   EXPECT_EQ(check_nums(10, -1), -1);
   EXPECT_EQ(check_nums(11, 10), -2);
   EXPECT_EQ(check_nums(-3, 11), -3);
   EXPECT_EQ(check_nums(10, -3), -3);
}

TEST(Func__pow2__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(pow2(0), 1);
   EXPECT_EQ(pow2(1), 2);
   EXPECT_EQ(pow2(2), 4);
   EXPECT_EQ(pow2(3), 8);
}

TEST(Func__sum_of_units_before__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(sum_of_units_before(0), 0);
   EXPECT_EQ(sum_of_units_before(1), 0);
   EXPECT_EQ(sum_of_units_before(2), 1);
   EXPECT_EQ(sum_of_units_before(3), 2);
   EXPECT_EQ(sum_of_units_before(4), 4);
   EXPECT_EQ(sum_of_units_before(5), 5);
   EXPECT_EQ(sum_of_units_before(6), 7);
   EXPECT_EQ(sum_of_units_before(8), 12);
   EXPECT_EQ(sum_of_units_before(11), 17);
}

TEST(Func__difference__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(difference(2, 7), 11);
   EXPECT_EQ(difference(0, 1), 1);
   EXPECT_EQ(difference(10, 11), 5);
   EXPECT_EQ(difference(-1, 11), -1);
   EXPECT_EQ(difference(10, -1), -1);
   EXPECT_EQ(difference(11, 10), -2);
   EXPECT_EQ(difference(-3, 11), -3);
   EXPECT_EQ(difference(10, -3), -3);
}

TEST(Func__raise_err__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(raise_err(1), "");
   EXPECT_EQ(raise_err(0), "");
   EXPECT_EQ(raise_err(-1), "Number must be unsignused");
   EXPECT_EQ(raise_err(-2), "Number \"b\" must be more than number \"a\"");
   EXPECT_EQ(raise_err(-3), "Please, input number, not string");
   EXPECT_EQ(raise_err(-4), "");
}

TEST(Func__check_err_code__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(check_err_code(1), "1");
   EXPECT_EQ(check_err_code(0), "0");
   EXPECT_EQ(check_err_code(-1), "Number must be unsignused");
   EXPECT_EQ(check_err_code(-2), "Number \"b\" must be more than number \"a\"");
   EXPECT_EQ(check_err_code(-3), "Please, input number, not string");
   EXPECT_EQ(check_err_code(-4), "");
}
