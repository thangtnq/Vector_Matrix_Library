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
// Sample TESTS:
//---------------------------------------------------------------------------
#if Vect_SampleTest_Enable
TEST(Vect_SampleTest, vector_tests, Vect_SampleTest_Enable)
{
	const float x(5.0f);

	CHECK(x == 5.0f);
} TEST_END
#endif

#if Vect_ConstantCheck_Enable
TEST(Vect_ConstantCheck, vector_tests, Vect_ConstantCheck_Enable)
{
	CHECK(Util::isEqual(MATH_PI2, 1.570796f, MATH_TOLERANCE) == true);
} TEST_END
#endif


// ---  End of File ---------------
