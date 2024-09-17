#include "StringCalculator.h"
#include<gtest/gtest.h>
#include <vector>

class TestDataPair{

public:
  string input;
  int expectedValue;
  TestDataPair(string_input,int_expectedValue) :input{_input},expectedValue{_expectedValue}{
}
};
 
TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
vector<TestDataPair> datalist;
TestDataPair pair_one {"",0};
TestDataPair pair_two {"0",0};
TestDataPair pair_three {"1",1};
TestDataPair pair_four {"1,2",3};
TestDataPair pair_five {"1,2,3",6};

dataList.pushback(pair_one);
dataList.pushback(pair_two);
dataList.pushback(pair_three);
dataList.pushback(pair_four);
dataList.pushback(pair_five);

//iterate using a range-based for -loop
  for(TestDataPair datapair : datalist) {
  int actualValue=Add(datapair.input);
  ASSERT_EQ(actualValue,datapair.expectedValue)
 
