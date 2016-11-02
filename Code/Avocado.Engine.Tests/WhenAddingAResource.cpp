#include "stdafx.h"
#include "gmock/gmock.h"
#include <gtest/gtest.h>

class TextureMock
{
public:
//	MOCK_METHOD1(LoadFromFile, bool (const std::string &filename));
};

class myTest : public testing::Test {

public:

	//TextureMock TextureMock;

	virtual void SetUp()
	{
		auto x = 1;
	}
};

TEST_F(myTest, ThenICanRetreiveTheResource)
{
	//this->TextureMock;

	EXPECT_TRUE(4 == 4);
}

