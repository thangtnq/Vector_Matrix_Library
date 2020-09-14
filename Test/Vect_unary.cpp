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

#if Vect_unary_Plus_Enable
TEST(Vect_unary_Plus, vector_tests, Vect_unary_Plus_Enable)
{
	Vect A(-2.0f, -3.0f, -4.0f, -5.0f);

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	+A;

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);
} TEST_END
#endif

#if Vect_unary_equal_Plus_Enable
TEST(Vect_unary_equal_Plus, vector_tests, Vect_unary_equal_Plus_Enable)
{
	Vect A(-2.0f, -3.0f, -4.0f, -5.0f);
	Vect B(21.0f, 31.0f, 41.0f, 51.0f);

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	CHECK(B[x] == 21.0f);
	CHECK(B[y] == 31.0f);
	CHECK(B[z] == 41.0f);
	CHECK(B[w] == 51.0f);

	B = +A;

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	CHECK(B[x] == -2.0f);
	CHECK(B[y] == -3.0f);
	CHECK(B[z] == -4.0f);
	CHECK(B[w] == 1.0f);
} TEST_END
#endif

#if Vect_unary_Minus_Enable
TEST(Vect_unary_Minus, vector_tests, Vect_unary_Minus_Enable)
{
	Vect A(-2.0f, -3.0f, -4.0f, -5.0f);

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	-A;

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);
} TEST_END
#endif

#if Vect_unary_equal_Minus_Enable
TEST(Vect_unary_equal_Minus, vector_tests, Vect_unary_equal_Minus_Enable)
{
	Vect A(-2.0f, -3.0f, -4.0f, -5.0f);
	Vect B(21.0f, 31.0f, 41.0f, 51.0f);

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	CHECK(B[x] == 21.0f);
	CHECK(B[y] == 31.0f);
	CHECK(B[z] == 41.0f);
	CHECK(B[w] == 51.0f);

	B = -A;

	CHECK(A[x] == -2.0f);
	CHECK(A[y] == -3.0f);
	CHECK(A[z] == -4.0f);
	CHECK(A[w] == -5.0f);

	CHECK(B[x] == 2.0f);
	CHECK(B[y] == 3.0f);
	CHECK(B[z] == 4.0f);
	CHECK(B[w] == 1.0f);
} TEST_END
#endif

// ---  End of File ---------------

