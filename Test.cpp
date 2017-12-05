#include "gtest/gtest.h"

int additionner(int x, int y)
{
	return x + y;
}

TEST(UnitTest, additionner1)
{
	int x = additionner(2, -2);
	EXPECT_EQ(0, x);
}

int main(int argc,char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

