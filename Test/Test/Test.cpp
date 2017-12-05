// Test.cpp : définit le point d'entrée pour l'application console.
//


#include "gtest/gtest.h"

int additionner(int x, int y){

	return x + y;
}


TEST(UnitTest, additionner1)
{
	int x = additionner(2, -2);
	EXPECT_EQ(0, x);
}

TEST(UnitTest, additionner2)
{
	int x = additionner(2, -2);
	EXPECT_EQ(0, x);
}

TEST(UnitTest, additionner3)
{
	int x = additionner(2, -2);
	EXPECT_EQ(0, x);
}


int main(int argc,char* argv[])
{
		
	int *yolo;
	yolo = new int;
	*yolo=1;
	testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
