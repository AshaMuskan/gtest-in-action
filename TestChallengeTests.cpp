#include <gtest/gtest.h>
#include "TestChallenge.h"
#include <gmock/gmock.h>
using testing:FloatEq;
using testing::Return;

//stub - fake dependency
class NetworkAlertStub:public INetworkAlerter{
public:
int alert(float celcius)override{
  return 500;
    }
};

//mock implementation using gmock
class NetworkAlertMock::public INetworkAlerter{
  public:
              MOCK_METHOD(int ,alert,(float celcius));

};

TEST(NetworkAlertTestSuite,StateBasedTest){
  NetworkAlerterStub stub;
  int failureCount= alertInCelciusFacade(400,&stub);
  ASSERT_EQ(failureCount,1);
}

TEST(NetworkAlertTestSuite,InteractionTest){
  NetworkAlerterMock mock;
  EXPECT_CALL(mock,alert(FloatEq(204.44))).Times(1).WillOnceo(Return(500));
  int failureCount= alertInCelciusFacade(400,&mock);
  ASSERT_EQ(failureCount,1);
}
