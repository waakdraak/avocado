#include "stdafx.h"
#include "gmock/gmock.h"
#include <gtest/gtest.h>

class TextureMock
{
public:
	MOCK_METHOD1(LoadFromFile, bool(std::string filename));
	MOCK_METHOD0(Load, bool());

};

class myTest : public testing::Test {

public:

	TextureMock _extureMock;

	virtual void SetUp()
	{
		auto x = 1;
	}
};

TEST_F(myTest, ThenICanRetreiveTheResource)
{
	TextureMock _txtureMockaa;

	EXPECT_CALL(this->_extureMock, LoadFromFile(testing::An<std::string>())).WillOnce(testing::Return(true));
	EXPECT_CALL(this->_extureMock, Load()).WillRepeatedly(testing::Return(true));

	auto u = std::string("fffff");

	auto y = _txtureMockaa.LoadFromFile(u);

	auto z = _txtureMockaa.Load();

	EXPECT_TRUE(4 == 4);
}

