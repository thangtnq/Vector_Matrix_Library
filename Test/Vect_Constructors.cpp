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

#if Vect_default_constuctor_Enable
TEST(Vect_default_constuctor, vector_tests, Vect_default_constuctor_Enable)
{
	Vect A;

	CHECK(A[x] == 0.0f);
	CHECK(A[y] == 0.0f);
	CHECK(A[z] == 0.0f);
	CHECK(A[w] == 1.0f);
} TEST_END
#endif

#if Vect_individual_defaultW_constuctor_Enable
TEST(Vect_individual_defaultW_constuctor, vector_tests, Vect_individual_defaultW_constuctor_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 1.0f);
} TEST_END
#endif

#if Vect_individual_constuctor_Enable
TEST(Vect_individual_constuctor, vector_tests, Vect_individual_constuctor_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);
} TEST_END
#endif

#if Vect_assignment_operator_Enable
TEST(Vect_assignment_operator, vector_tests, Vect_assignment_operator_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);
	Vect B(10.0f, 11.0f, 12.0f, 13.0f);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	CHECK(B[x] == 10.0f);
	CHECK(B[y] == 11.0f);
	CHECK(B[z] == 12.0f);
	CHECK(B[w] == 13.0f);

	B = A;

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	CHECK(B[x] == A[x]);
	CHECK(B[y] == A[y]);
	CHECK(B[z] == A[z]);
	CHECK(B[w] == A[w]);
} TEST_END
#endif

#if Vect_Copy_constuctor_Enable
TEST(Vect_Copy_constuctor, vector_tests, Vect_Copy_constuctor_Enable)
{
	Vect A(2.0f, 3.0f, 4.0f, 5.0f);
	Vect B(A);

	CHECK(A[x] == 2.0f);
	CHECK(A[y] == 3.0f);
	CHECK(A[z] == 4.0f);
	CHECK(A[w] == 5.0f);

	CHECK(B[x] == A[x]);
	CHECK(B[y] == A[y]);
	CHECK(B[z] == A[z]);
	CHECK(B[w] == A[w]);
} TEST_END
#endif

#if Vect_Destructor_constuctor_Enable
TEST(Vect_Destructor_constuctor, vector_tests, Vect_Destructor_constuctor_Enable)
{
	Vect v2(5.0f, 6.0f, 7.0f, 8.0f);
	Vect *pV2 = &v2;
	pV2->~Vect();
	CHECK(1);
} TEST_END
#endif

// ---  End of File ---------------
