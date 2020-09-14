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

#if Vect_set_3_elements_Enable
TEST(Vect_set_3_elements, vector_tests, Vect_set_3_elements_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	A.set(10.0f, 20.0f, 30.0f);

	CHECK(A[x] == 10.0f);
	CHECK(A[y] == 20.0f);
	CHECK(A[z] == 30.0f);
	CHECK(A[w] == 1.0f);
} TEST_END
#endif

#if Vect_set_4_elements_Enable
TEST(Vect_set_4_elements, vector_tests, Vect_set_4_elements_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	A.set(10.0f, 20.0f, 30.0f, 40.0f);

	CHECK(A[x] == 10.0f);
	CHECK(A[y] == 20.0f);
	CHECK(A[z] == 30.0f);
	CHECK(A[w] == 40.0f);
} TEST_END
#endif

#if Vect_set_Vector_Enable
TEST(Vect_set_Vector, vector_tests, Vect_set_Vector_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	Vect B(10.0f, 20.0f, 30.0f, 40.0f);

	CHECK(B[x] == 10.0f);
	CHECK(B[y] == 20.0f);
	CHECK(B[z] == 30.0f);
	CHECK(B[w] == 40.0f);

	A.set(B);

	CHECK(B[x] == 10.0f);
	CHECK(B[y] == 20.0f);
	CHECK(B[z] == 30.0f);
	CHECK(B[w] == 40.0f);

	CHECK(A[x] == 10.0f);
	CHECK(A[y] == 20.0f);
	CHECK(A[z] == 30.0f);
	CHECK(A[w] == 40.0f);

} TEST_END
#endif

// ---  End of File ---------------
