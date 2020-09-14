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

#if Vect_scale_Vect_Enable
TEST(Vect_scale_Vect, vector_tests, Vect_scale_Vect_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);
	const float s = 5.0f;
	Vect C;

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	C = s * A;

	CHECK(C[x] == 10.0f);
	CHECK(C[y] == 15.0f);
	CHECK(C[z] == 20.0f);
	CHECK(C[w] == 1.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
} TEST_END
#endif

#if Vect_times_Scale_Enable
TEST(Vect_times_Scale, vector_tests, Vect_times_Scale_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);
	const float s = 5.0f;
	Vect C;

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	C = A * s;

	CHECK(C[x] == 10.0f);
	CHECK(C[y] == 15.0f);
	CHECK(C[z] == 20.0f);
	CHECK(C[w] == 1.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
} TEST_END
#endif

#if Vect_ScaleEquals_Enable
TEST(Vect_ScaleEquals, vector_tests, Vect_ScaleEquals_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);
	const float s = 5.0f;

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	A *= s;

	CHECK(A[x] == 10.0f);
	CHECK(A[y] == 15.0f);
	CHECK(A[z] == 20.0f);
	CHECK(A[w] == 1.0f);
} TEST_END
#endif

// ---  End of File ---------------
