#include "stdafx.h"
#include <gtest/gtest.h>

class myTest : public testing::Test {

public:
	virtual void SetUp()
	{
		auto x = 1;
	}
};

TEST_F(myTest, name2)
{
	EXPECT_TRUE(4 == 4);
}

TEST_F(myTest, CanAddTwoNumbers)
{
	EXPECT_TRUE(4 == 4);
}