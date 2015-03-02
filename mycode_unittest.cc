#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"

matrix m1,m2;

TEST(matrixmultiplyTest, Two){
	int matrix1[2][2] =
		{
		{4,4},
		{4,4}
		};
	int matrix2[2][2] =
		{
		{4,4},
		{4,4}
		};
        int result[2][2] =
		{
		{16,16},
		{16,16}
		};
	m1=m2.multiply(matrix1,matrix2);
        EXPECT_EQ(m1, result);
    }

matrix m3,m4;
TEST(matrixaddTest, Two){
	int matrix1[2][2] =
		{
		{4,4},
		{4,4}
		};
	int matrix2[2][2] =
		{
		{4,4},
		{4,4}
		};
        int result[2][2] =
		{
		{8,8},
		{8,8}
		};
	m3=m4.add(matrix1,matrix2);
        EXPECT_EQ(m3, result);
    }


matrix m5,m6;
TEST(matrixaddmultiplyTest, Two){
	int matrix1[2][2] =
		{
		{4,4},
		{4,4}
		};
	int matrix2[2][2] =
		{
		{4,4},
		{4,4}
		};
	int matrix3[2][2] =
		{
		{4,4},
		{4,4}
		};
	  int result[2][2] =
		{
		{36,36},
		{36,36}
		};
	m5=m6.multiply(matrix1,matrix2);
	m7=m8.add(m5,matrix3);
        EXPECT_EQ(m7, result);
    }