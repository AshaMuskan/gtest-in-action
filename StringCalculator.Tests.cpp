#include "StringCalculator.h"
#include <gtest/gtest.h>

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
//Arrange
string input="1";
int expectedValue=1;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}
 
TEST(StringCalculatorTestSuite,add_twoInputString_SumIsExpected){
//Arrange
string input="2,2";
int expectedValue=4;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_multipleInputString_SumIsExpected){
//Arrange
string input="2,2,1,1,2";
int expectedValue=8;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_newlineInputString_SumIsExpected){
//Arrange
string input="5\n1,2";
int expectedValue=8;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputString_SumIsExpected){
//Arrange
string input="//;\n5;1";
int expectedValue=6;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}
