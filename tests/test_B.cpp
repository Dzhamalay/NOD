#include <gtest/gtest.h>
#include "NOD_B.h"
#include "NOD.h"

TEST(NOD_B_test, call_func) {
	NOD nod;
	NOD_B nod_b(nod);
	int result = nod_b.useNOD(30, 18);
	
	EXPECT_EQ(result, 6);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
