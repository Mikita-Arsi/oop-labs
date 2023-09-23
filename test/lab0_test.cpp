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
   try {
      res = count_of_non_zero_bits_in_range(a, b);
   } catch (std::invalid_argument const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Invalid input, number must be unsignused"));
   } catch (...) {
      FAIL() << "Expected std::invalid_argument";
   }
}

TEST(NegativeErrTest_b, BasicAsExasertions) {
   // arrange
   int a{2}, b{-7}, res;

   // act
   try {
      res = count_of_non_zero_bits_in_range(a, b);
   } catch (std::invalid_argument const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Invalid input, number must be unsignused"));
   } catch (...) {
      FAIL() << "Expected std::invalid_argument";
   }
}

TEST(CompareErrTest, BasicAsExasertions) {
   // arrange
   int a{8}, b{7}, res;

   // act
   try {
      res = count_of_non_zero_bits_in_range(a, b);
   } catch (std::out_of_range const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Number \"b\" must be more than number \"a\""));
   } catch (...) {
      FAIL() << "Expected std::out_of_range";
   }
}
TEST(Func__validate_nums__NegativeErrTest_a, BasicAsExasertions) {
   // arrange
   int a{-8}, b(7);
   // act
   try {
      validate_nums(a, b);
   } catch (std::invalid_argument const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Invalid input, number must be unsignused"));
   } catch (...) {
      FAIL() << "Expected std::invalid_argument";
   }
}

TEST(Func__validate_nums__NegativeErrTest_b, BasicAsExasertions) {
   // arrange
   int a{2}, b(-7);
   // act
   try {
      validate_nums(a, b);
   } catch (std::invalid_argument const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Invalid input, number must be unsignused"));
   } catch (...) {
      FAIL() << "Expected std::invalid_argument";
   }
}

TEST(Func__validate_nums__CompareErrTest, BasicAsExasertions) {
   // arrange
   int a{8}, b(7);
   // act
   try {
      validate_nums(a, b);
   } catch (std::out_of_range const& err) {
      // assert
      EXPECT_EQ(err.what(),
                std::string("Number \"b\" must be more than number \"a\""));
   } catch (...) {
      FAIL() << "Expected std::out_of_range";
   }
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

TEST(Func__not_equal_reminder__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(not_equal_reminder(11, 1), true);
   EXPECT_EQ(not_equal_reminder(11, 2), false);
   EXPECT_EQ(not_equal_reminder(8, 2), false);
   EXPECT_EQ(not_equal_reminder(8, 3), true);
}

TEST(Func__calculating_the_range_difference__Test, BasicAsExasertions) {
   // arrange

   // act

   // assert
   EXPECT_EQ(calculating_the_range_difference(2, 8), 11);
   EXPECT_EQ(calculating_the_range_difference(0, 2), 1);
   EXPECT_EQ(calculating_the_range_difference(10, 12), 5);
}
