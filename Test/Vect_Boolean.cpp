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

#if IsEqualFalse_Test_Enable
TEST(IsEqualFalse, vector_tests, IsEqualFalse_Test_Enable)
{
	Vect v1(1.0f, 2.0f, 3.0f);
	Vect v2(9.0f, -3.0f, 5.0f);
	bool bvalue1;

	bvalue1 = v1.isEqual(v2, 0.1f);

	CHECK(bvalue1 == false);
} TEST_END
#endif

#if IsEqualTrue_Test_Enable
TEST(IsEqualTrue, vector_tests, IsEqualTrue_Test_Enable)
{
	bool bvalue1;
	Vect v1(1.0f, 2.0f, 3.0f);
	Vect v2(1.0f, 2.0f, 3.05f);

	bvalue1 = v1.isEqual(v2, 0.1f);

	CHECK(bvalue1 == true);
} TEST_END
#endif

#if IsZeroFalse_Test_Enable
TEST(IsZeroFalse, vector_tests, IsZeroFalse_Test_Enable)
{
	bool bvalue1;
	Vect v1(0.023f, 0.0f, 0.0f, 1.05f);

	bvalue1 = v1.isZero(0.0f);

	CHECK(bvalue1 == false);
} TEST_END
#endif

#if IsZeroTrue_True_Enable
TEST(IsZeroTrue, vector_tests, IsZeroTrue_True_Enable)
{
	bool bvalue1;
	Vect v1(0.0f, 0.0f, 0.0f, 1.05f);

	bvalue1 = v1.isZero(0.1f);

	CHECK(bvalue1 == true);
} TEST_END
#endif

#if IsEqualFalse_default_Test_Enable
TEST(IsEqualFalse_default, vector_tests, IsEqualFalse_default_Test_Enable)
{
	Vect v1(1.0f, 2.0f, 3.0f);
	Vect v2(9.0f, -3.0f, 5.0f);
	bool bvalue1;

	bvalue1 = v1.isEqual(v2);

	CHECK(bvalue1 == false);
} TEST_END
#endif

#if IsEqualTrue_default_Test_Enable
TEST(IsEqualTrue_default, vector_tests, IsEqualTrue_default_Test_Enable)
{
	bool bvalue1;
	Vect v1(1.0f, 2.0f, 3.0f);
	Vect v2(1.0f, 2.0f, 3.05f);

	bvalue1 = v1.isEqual(v2);

	CHECK(bvalue1 == false);
} TEST_END
#endif

#if IsZeroFalse_default_Test_Enable
TEST(IsZeroFalse_default, vector_tests, IsZeroFalse_default_Test_Enable)
{
	bool bvalue1;
	Vect v1(0.023f, 0.0f, 0.0f, 1.05f);

	bvalue1 = v1.isZero();

	CHECK(bvalue1 == false);
} TEST_END
#endif

#if IsZeroTrue_default_Test_Enable
TEST(IsZeroTrue_default, vector_tests, IsZeroTrue_default_Test_Enable)
{
	bool bvalue1;
	Vect v1(0.0f, 0.0f, 0.0f, 1.05f);

	bvalue1 = v1.isZero();

	CHECK(bvalue1 == false);
} TEST_END
#endif

// ---  End of File ---------------
