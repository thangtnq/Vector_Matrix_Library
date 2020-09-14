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
#if Get_Brackets_Test_Enable
TEST(Get_Brackets, vector_tests, Get_Brackets_Test_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
}  TEST_END
#endif

#if Get_Brackets_const_Test_End
float constTest(const Vect &t)
{
	return (t[x] + t[y] + t[z] + t[w]);
}

TEST(Get_Brackets_const, vector_tests, Get_Brackets_const_Test_End)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	const float sum = constTest(A);

	CHECK(sum == 14.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
}  TEST_END
#endif

#if Set_Brackets_Test_Enable
TEST(Set_Brackets, vector_tests, Set_Brackets_Test_Enable)
{
	Vect A(0.0f, 0.0f, 0.0f, 0.0f);

	CHECK(A[x] == 0.0f);
	CHECK(A[y] == 0.0f);
	CHECK(A[z] == 0.0f);
	CHECK(A[w] == 0.0f);

	A[x] = 2.0f;
	A[y] = 3.0f;
	A[z] = 4.0f;
	A[w] = 5.0f;

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
}  TEST_END
#endif

#if Set_Brackets_get_Test_Enable
TEST(Set_Brackets_get, vector_tests, Set_Brackets_get_Test_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	float tx, ty, tz, tw;

	tx = A[x];
	ty = A[y];
	tz = A[z];
	tw = A[w];

	CHECK(tx == 2.0f);
	CHECK(ty == 3.0f);
	CHECK(tz == 4.0f);
	CHECK(tw == 5.0f);
}  TEST_END
#endif

// ---  End of File ---------------
