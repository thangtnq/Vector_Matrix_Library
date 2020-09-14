//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//-----------------------------------------------------------------------------  

#include "_UnitTestConfiguration.h"

//---------------------------------------------------------------------------
// HEADER FILES:
//---------------------------------------------------------------------------
#include "MathEngine.h"
using namespace Azul;

//---------------------------------------------------------------------------
// TESTS:
//---------------------------------------------------------------------------
#if Matrix_Bracket_set_Test_Enable
TEST(Matrix_Bracket_set, matix_tests, Matrix_Bracket_set_Test_Enable)
{
	Matrix M;

	CHECK(M[m0] == 0.0f);
	CHECK(M[m1] == 0.0f);
	CHECK(M[m2] == 0.0f);
	CHECK(M[m3] == 0.0f);
	CHECK(M[m4] == 0.0f);
	CHECK(M[m5] == 0.0f);
	CHECK(M[m6] == 0.0f);
	CHECK(M[m7] == 0.0f);
	CHECK(M[m8] == 0.0f);
	CHECK(M[m9] == 0.0f);
	CHECK(M[m10] == 0.0f);
	CHECK(M[m11] == 0.0f);
	CHECK(M[m12] == 0.0f);
	CHECK(M[m13] == 0.0f);
	CHECK(M[m14] == 0.0f);
	CHECK(M[m15] == 0.0f);

	M[m0] = 1.0f;
	M[m1] = 2.0f;
	M[m2] = 3.0f;
	M[m3] = 4.0f;
	M[m4] = 7.0f;
	M[m5] = 6.0f;
	M[m6] = 5.0f;
	M[m7] = 3.0f;
	M[m8] = -4.0f;
	M[m9] = -2.0f;
	M[m10] = -1.0f;
	M[m11] = -4.0f;
	M[m12] = 9.0f;
	M[m13] = -7.0f;
	M[m14] = -2.0f;
	M[m15] = 5.0f;

	CHECK(M[m0] == 1.0f);
	CHECK(M[m1] == 2.0f);
	CHECK(M[m2] == 3.0f);
	CHECK(M[m3] == 4.0f);
	CHECK(M[m4] == 7.0f);
	CHECK(M[m5] == 6.0f);
	CHECK(M[m6] == 5.0f);
	CHECK(M[m7] == 3.0f);
	CHECK(M[m8] == -4.0f);
	CHECK(M[m9] == -2.0f);
	CHECK(M[m10] == -1.0f);
	CHECK(M[m11] == -4.0f);
	CHECK(M[m12] == 9.0f);
	CHECK(M[m13] == -7.0f);
	CHECK(M[m14] == -2.0f);
	CHECK(M[m15] == 5.0f);
} TEST_END
#endif

#if Get_Brackets_const_Test_Enable
float constTest(const Matrix &t)
{
	return (t[m0] + t[m1] + t[m2] + t[m3]
			+ t[m4] + t[m5] + t[m6] + t[m7]
			+ t[m8] + t[m9] + t[m10] + t[m11]
			+ t[m12] + t[m13] + t[m14] + t[m15]
			);
}

TEST(Get_Brackets_const, Matrix_tests, Get_Brackets_const_Test_Enable)
{
	Matrix M;
	M[m0] = 1.0f;
	M[m1] = 2.0f;
	M[m2] = 3.0f;
	M[m3] = 4.0f;
	M[m4] = 7.0f;
	M[m5] = 6.0f;
	M[m6] = 5.0f;
	M[m7] = 3.0f;
	M[m8] = -4.0f;
	M[m9] = -2.0f;
	M[m10] = -1.0f;
	M[m11] = -4.0f;
	M[m12] = 9.0f;
	M[m13] = -7.0f;
	M[m14] = -2.0f;
	M[m15] = 5.0f;

	CHECK(M[m0] == 1.0f);
	CHECK(M[m1] == 2.0f);
	CHECK(M[m2] == 3.0f);
	CHECK(M[m3] == 4.0f);
	CHECK(M[m4] == 7.0f);
	CHECK(M[m5] == 6.0f);
	CHECK(M[m6] == 5.0f);
	CHECK(M[m7] == 3.0f);
	CHECK(M[m8] == -4.0f);
	CHECK(M[m9] == -2.0f);
	CHECK(M[m10] == -1.0f);
	CHECK(M[m11] == -4.0f);
	CHECK(M[m12] == 9.0f);
	CHECK(M[m13] == -7.0f);
	CHECK(M[m14] == -2.0f);
	CHECK(M[m15] == 5.0f);

	const float sum = constTest(M);

	CHECK(sum == 25.0f);
} TEST_END
#endif

#if Matrix_Bracket_get_Test_Enable
TEST(Matrix_Bracket_get, matix_tests, Matrix_Bracket_get_Test_Enable)
{
	Vect V0(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(7.0f, 6.0f, 5.0f, 3.0f);
	Vect V2(-4.0f, -2.0f, -1.0f, -4.0f);
	Vect V3(9.0f, -7.0f, -2.0f, 5.0f);

	Matrix M(V0, V1, V2, V3);

	CHECK(M[m0] == 1.0f);
	CHECK(M[m1] == 2.0f);
	CHECK(M[m2] == 3.0f);
	CHECK(M[m3] == 4.0f);
	CHECK(M[m4] == 7.0f);
	CHECK(M[m5] == 6.0f);
	CHECK(M[m6] == 5.0f);
	CHECK(M[m7] == 3.0f);
	CHECK(M[m8] == -4.0f);
	CHECK(M[m9] == -2.0f);
	CHECK(M[m10] == -1.0f);
	CHECK(M[m11] == -4.0f);
	CHECK(M[m12] == 9.0f);
	CHECK(M[m13] == -7.0f);
	CHECK(M[m14] == -2.0f);
	CHECK(M[m15] == 5.0f);

	float t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15;

	t0 = M[m0];
	t1 = M[m1];
	t2 = M[m2];
	t3 = M[m3];
	t4 = M[m4];
	t5 = M[m5];
	t6 = M[m6];
	t7 = M[m7];
	t8 = M[m8];
	t9 = M[m9];
	t10 = M[m10];
	t11 = M[m11];
	t12 = M[m12];
	t13 = M[m13];
	t14 = M[m14];
	t15 = M[m15];

	CHECK(t0 == 1.0f);
	CHECK(t1 == 2.0f);
	CHECK(t2 == 3.0f);
	CHECK(t3 == 4.0f);
	CHECK(t4 == 7.0f);
	CHECK(t5 == 6.0f);
	CHECK(t6 == 5.0f);
	CHECK(t7 == 3.0f);
	CHECK(t8 == -4.0f);
	CHECK(t9 == -2.0f);
	CHECK(t10 == -1.0f);
	CHECK(t11 == -4.0f);
	CHECK(t12 == 9.0f);
	CHECK(t13 == -7.0f);
	CHECK(t14 == -2.0f);
	CHECK(t15 == 5.0f);
} TEST_END
#endif
// ---  End of File ---------------
