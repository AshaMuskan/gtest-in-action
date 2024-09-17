#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrays
string input="";
int expectedValue=0;
//Act
int actualValue(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}
