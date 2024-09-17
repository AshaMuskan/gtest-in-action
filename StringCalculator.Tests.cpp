#include "StringCalculator.h"
#include <gtest/gtest.h>



class StringCalculatorFixture:public testing::Test{
protected:
  string input;
  int expectedValue;
  int actualValue;
};

TEST_F(StringCalculatorFixture,add_oneInputString_OneIsExpected){
input="1";
expectedValue=1;
actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrays
string input="";
int expectedValue=0;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_oneInputString_OneIsExpected){
string input="1";
int expectedValue=1;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}
 
TEST(StringCalculatorTestSuite,add_twoInputString_SumIsExpected){
string input="2,2";
int expectedValue=4;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_multipleInputString_SumIsExpected){
string input="2,2,1,1,2";
int expectedValue=8;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_newlineInputString_SumIsExpected){
string input="5\n1,2";
int expectedValue=8;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputString_SumIsExpected){
string input="//;\n5;1";
int expectedValue=6;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_multicharacterInputString_SumIsExpected){
string input="//[***]\n2***1***2";
int expectedValue=5;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_multiInputString_SumIsExpected){
string input="//[**][%^]\n3**3%^3";
int expectedValue=9;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_negative_numbers_throws_an_exception_invalid_argument){
string input="1,-2,-2,5";
int expectedValue=0;
ASSERT_THROW(Add(input),invalid_argument);
}

TEST(StringCalculatorTestSuite,add_when_passed_numbers_over_1000_SumIsExpected){
string input="22,1201,6";
int expectedValue=28;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}
