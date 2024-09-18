#include <gtest/gtest.h>
#include "TestChallenge.h"

//stub - fake dependency
class NetworkAlertStub:public INetworkAlerter{
public:
int alert(float celcius)override{
  return 500;
//
}
};

TEST(NetworkAlertTestSuite,StateBasedTest){
  NetworkAlerterStub stub;
  int failureCount= alertInCelciusFacade(400,stub);
  ASSERT_EQ(failureCount,0);
}
