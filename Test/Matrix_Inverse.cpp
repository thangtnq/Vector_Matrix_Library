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
#if Matrix_inverse_Test_Enable
TEST( Matrix_inverse, matix_tests, Matrix_inverse_Test_Enable)
{
	Matrix Rx(Matrix::Rot1::X, 0.23f);
	Matrix Ry(Matrix::Rot1::Y, -1.23f);
	Matrix T(Matrix::Trans::XYZ, 3.4f, 2.9f, -9.0f);

	Matrix M = Rx * Ry * T;
	Matrix N(M);

	M.inv();

	Matrix C;
	C = N * M;

	// verify C is identity

	const bool flag = C.isIdentity(MATH_TOLERANCE);

	CHECK(flag == true);
} TEST_END
#endif

#if Matrix_getinverse_Test_Enable
TEST(Matrix_getinverse, matix_tests, Matrix_getinverse_Test_Enable)
{
	Matrix Rx(Matrix::Rot1::X, 0.23f);
	Matrix Ry(Matrix::Rot1::Y, -1.23f);
	Matrix S(Matrix::Scale::XYZ, 4.0f, 5.0f, 2.0f);
	Matrix T(Matrix::Trans::XYZ, -2.3f, 7.9f, 9.03f);

	Matrix M = S * T * Rx * Ry * S;
	Matrix N;

	N = M.getInv();

	Matrix C;
	C = N * M;

	// verify C is identity
	const bool flag = C.isIdentity(MATH_TOLERANCE);

	CHECK(flag == true);
} TEST_END
#endif

// ---  End of File ---------------
