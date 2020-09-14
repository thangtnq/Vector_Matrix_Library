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
#if Special_Matrix_Identity_Test_Enable
TEST(Matrix_Identity, matrix_tests, Special_Matrix_Identity_Test_Enable)
{
	Matrix A(Matrix::Special::Identity);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 1.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 1.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 0.0f);
	CHECK(A[m13] == 0.0f);
	CHECK(A[m14] == 0.0f);
	CHECK(A[m15] == 1.0f);
} TEST_END
#endif

#if Special_Matrix_Zero_Test_Enable
TEST(Matrix_Zero, matrix_tests, Special_Matrix_Zero_Test_Enable)
{
	Matrix A(Matrix::Special::Zero);

	CHECK(A[m0] == 0.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 0.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 0.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 0.0f);
	CHECK(A[m13] == 0.0f);
	CHECK(A[m14] == 0.0f);
	CHECK(A[m15] == 0.0f);
} TEST_END
#endif

#if Special_Matrix_Trans_Test_Enable
TEST(Matrix_Trans, matrix_tests, Special_Matrix_Trans_Test_Enable )
{
	Matrix A(Matrix::Trans::XYZ, 2.0f, 3.0f, 4.0f);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 1.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 1.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 2.0f);
	CHECK(A[m13] == 3.0f);
	CHECK(A[m14] == 4.0f);
	CHECK(A[m15] == 1.0f);
} TEST_END
#endif

#if Special_Matrix_Trans_Vect_Test_Enable
TEST(Matrix_Trans_Vect, matrix_tests, Special_Matrix_Trans_Vect_Test_Enable)
{
	Vect vTrans(2.0f, 3.0f, 4.0f);
	Matrix A(Matrix::Trans::XYZ, vTrans);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 1.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 1.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 2.0f);
	CHECK(A[m13] == 3.0f);
	CHECK(A[m14] == 4.0f);
	CHECK(A[m15] == 1.0f);
} TEST_END
#endif

#if Special_Matrix_SCALE_Test_Enable
TEST(Matrix_SCALE, matrix_tests, Special_Matrix_SCALE_Test_Enable)
{
	Matrix A(Matrix::Scale::XYZ, 2.0f, 3.0f, 4.0f);

	CHECK(A[m0] == 2.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 3.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 4.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 0.0f);
	CHECK(A[m13] == 0.0f);
	CHECK(A[m14] == 0.0f);
	CHECK(A[m15] == 1.0f);
} TEST_END
#endif

#if Special_Matrix_SCALE_Vect_Test_Enable
TEST(Matrix_SCALE_Vect, matrix_tests, Special_Matrix_SCALE_Vect_Test_Enable)
{
	Vect vScale(2.0f, 3.0f, 4.0f);
	Matrix A(Matrix::Scale::XYZ, vScale);

	CHECK(A[m0] == 2.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 3.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 4.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 0.0f);
	CHECK(A[m13] == 0.0f);
	CHECK(A[m14] == 0.0f);
	CHECK(A[m15] == 1.0f);
} TEST_END
#endif

#if Special_RotX_Test_Enable
TEST(RotX, matrix_tests, Special_RotX_Test_Enable)
{
	// Rot_X Type Constructor:
	Matrix Rx(Matrix::Rot1::X, 1.0471975512f);

	CHECK(Rx[m0] == 1.0f);
	CHECK(Rx[m1] == 0.0f);
	CHECK(Rx[m2] == 0.0f);
	CHECK(Rx[m3] == 0.0f);
	CHECK(Rx[m4] == 0.0f);
	CHECK(eq(Rx[m5], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rx[m6], 0.866f, MATH_TOLERANCE));
	CHECK(Rx[m7] == 0.0f);
	CHECK(Rx[m8] == 0.0f);
	CHECK(eq(Rx[m9], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rx[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Rx[m11] == 0.0f);
	CHECK(Rx[m12] == 0.0f);
	CHECK(Rx[m13] == 0.0f);
	CHECK(Rx[m14] == 0.0f);
	CHECK(Rx[m15] == 1.0f);
} TEST_END
#endif

#if Special_RotY_Test_Enable
TEST(RotY, matrix_tests, Special_RotY_Test_Enable)
{
	Matrix Ry(Matrix::Rot1::Y, 1.0471975512f);

	CHECK(eq(Ry[m0], 0.5f, MATH_TOLERANCE));
	CHECK(Ry[m1] == 0.0f);
	CHECK(eq(Ry[m2], -0.866f, MATH_TOLERANCE));
	CHECK(Ry[m3] == 0.0f);
	CHECK(Ry[m4] == 0.0f);
	CHECK(Ry[m5] == 1.0f);
	CHECK(Ry[m6] == 0.0f);
	CHECK(Ry[m7] == 0.0f);
	CHECK(eq(Ry[m8], 0.866f, MATH_TOLERANCE));
	CHECK(Ry[m9] == 0.0f);
	CHECK(eq(Ry[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Ry[m11] == 0.0f);
	CHECK(Ry[m12] == 0.0f);
	CHECK(Ry[m13] == 0.0f);
	CHECK(Ry[m14] == 0.0f);
	CHECK(Ry[m15] == 1.0f);
} TEST_END
#endif

#if Special_RotZ_Test_Enable
TEST(RotZ, matrix_tests, Special_RotZ_Test_Enable)
{
	Matrix Rz(Matrix::Rot1::Z, 1.0471975512f);

	CHECK(eq(Rz[m0], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rz[m1], 0.866f, MATH_TOLERANCE));
	CHECK(Rz[m2] == 0.0f);
	CHECK(Rz[m3] == 0.0f);
	CHECK(eq(Rz[m4], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rz[m5], 0.5f, MATH_TOLERANCE));
	CHECK(Rz[m6] == 0.0f);
	CHECK(Rz[m7] == 0.0f);
	CHECK(Rz[m8] == 0.0f);
	CHECK(Rz[m9] == 0.0f);
	CHECK(Rz[m10] == 1.0f);
	CHECK(Rz[m11] == 0.0f);
	CHECK(Rz[m12] == 0.0f);
	CHECK(Rz[m13] == 0.0f);
	CHECK(Rz[m14] == 0.0f);
	CHECK(Rz[m15] == 1.0f);
} TEST_END
#endif


#if Special_RotXYZ_Set_Test_Enable
TEST(Special_RotXYZ_Set, matrix_tests, Special_RotXYZ_Set_Test_Enable)
{
	// Rot_X Type Constructor:
	Matrix Rx(Matrix::Rot1::X, 1.0471975512f);

	CHECK(Rx[m0] == 1.0f);
	CHECK(Rx[m1] == 0.0f);
	CHECK(Rx[m2] == 0.0f);
	CHECK(Rx[m3] == 0.0f);
	CHECK(Rx[m4] == 0.0f);
	CHECK(eq(Rx[m5], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rx[m6], 0.866f, MATH_TOLERANCE));
	CHECK(Rx[m7] == 0.0f);
	CHECK(Rx[m8] == 0.0f);
	CHECK(eq(Rx[m9], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rx[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Rx[m11] == 0.0f);
	CHECK(Rx[m12] == 0.0f);
	CHECK(Rx[m13] == 0.0f);
	CHECK(Rx[m14] == 0.0f);
	CHECK(Rx[m15] == 1.0f);

	Matrix Ry(Matrix::Rot1::Y, 2.0943951023f);

	CHECK(eq(Ry[m0], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m1] == 0.0f);
	CHECK(eq(Ry[m2], -0.866f, MATH_TOLERANCE));
	CHECK(Ry[m3] == 0.0f);
	CHECK(Ry[m4] == 0.0f);
	CHECK(Ry[m5] == 1.0f);
	CHECK(Ry[m6] == 0.0f);
	CHECK(Ry[m7] == 0.0f);
	CHECK(eq(Ry[m8], 0.866f, MATH_TOLERANCE));
	CHECK(Ry[m9] == 0.0f);
	CHECK(eq(Ry[m10], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m11] == 0.0f);
	CHECK(Ry[m12] == 0.0f);
	CHECK(Ry[m13] == 0.0f);
	CHECK(Ry[m14] == 0.0f);
	CHECK(Ry[m15] == 1.0f);

	Matrix Rz(Matrix::Rot1::Z, 2.3561944901f);

	CHECK(eq(Rz[m0], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m1], 0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m2] == 0.0f);
	CHECK(Rz[m3] == 0.0f);
	CHECK(eq(Rz[m4], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m5], -0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m6] == 0.0f);
	CHECK(Rz[m7] == 0.0f);
	CHECK(Rz[m8] == 0.0f);
	CHECK(Rz[m9] == 0.0f);
	CHECK(Rz[m10] == 1.0f);
	CHECK(Rz[m11] == 0.0f);
	CHECK(Rz[m12] == 0.0f);
	CHECK(Rz[m13] == 0.0f);
	CHECK(Rz[m14] == 0.0f);
	CHECK(Rz[m15] == 1.0f);

	Matrix N;
	N.set(Matrix::Rot3::XYZ, 1.0471975512f, 2.0943951023f, 2.3561944901f);
	Matrix M;

	M = Rx * Ry * Rz;

	CHECK(eq(N[m0], 0.3535f, MATH_TOLERANCE));
	CHECK(eq(N[m1], -0.3535f, MATH_TOLERANCE));
	CHECK(eq(N[m2], -0.8660f, MATH_TOLERANCE));
	CHECK(eq(N[m3], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m4], -0.8838f, MATH_TOLERANCE));
	CHECK(eq(N[m5], 0.1767f, MATH_TOLERANCE));
	CHECK(eq(N[m6], -0.4330f, MATH_TOLERANCE));
	CHECK(eq(N[m7], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m8], 0.3061f, MATH_TOLERANCE));
	CHECK(eq(N[m9], 0.9185f, MATH_TOLERANCE));
	CHECK(eq(N[m10], -0.25f, MATH_TOLERANCE));
	CHECK(eq(N[m11], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m12], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m13], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m14], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m15], 1.0f, MATH_TOLERANCE));

	CHECK(eq(M[m0], 0.3535f, MATH_TOLERANCE));
	CHECK(eq(M[m1], -0.3535f, MATH_TOLERANCE));
	CHECK(eq(M[m2], -0.8660f, MATH_TOLERANCE));
	CHECK(eq(M[m3], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m4], -0.8838f, MATH_TOLERANCE));
	CHECK(eq(M[m5], 0.1767f, MATH_TOLERANCE));
	CHECK(eq(M[m6], -0.4330f, MATH_TOLERANCE));
	CHECK(eq(M[m7], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m8], 0.3061f, MATH_TOLERANCE));
	CHECK(eq(M[m9], 0.9185f, MATH_TOLERANCE));
	CHECK(eq(M[m10], -0.25f, MATH_TOLERANCE));
	CHECK(eq(M[m11], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m12], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m13], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m14], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m15], 1.0f, MATH_TOLERANCE));

	CHECK(Rx[m0] == 1.0f);
	CHECK(Rx[m1] == 0.0f);
	CHECK(Rx[m2] == 0.0f);
	CHECK(Rx[m3] == 0.0f);
	CHECK(Rx[m4] == 0.0f);
	CHECK(eq(Rx[m5], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rx[m6], 0.866f, MATH_TOLERANCE));
	CHECK(Rx[m7] == 0.0f);
	CHECK(Rx[m8] == 0.0f);
	CHECK(eq(Rx[m9], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rx[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Rx[m11] == 0.0f);
	CHECK(Rx[m12] == 0.0f);
	CHECK(Rx[m13] == 0.0f);
	CHECK(Rx[m14] == 0.0f);
	CHECK(Rx[m15] == 1.0f);

	CHECK(eq(Ry[m0], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m1] == 0.0f);
	CHECK(eq(Ry[m2], -0.866f, MATH_TOLERANCE));
	CHECK(Ry[m3] == 0.0f);
	CHECK(Ry[m4] == 0.0f);
	CHECK(Ry[m5] == 1.0f);
	CHECK(Ry[m6] == 0.0f);
	CHECK(Ry[m7] == 0.0f);
	CHECK(eq(Ry[m8], 0.866f, MATH_TOLERANCE));
	CHECK(Ry[m9] == 0.0f);
	CHECK(eq(Ry[m10], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m11] == 0.0f);
	CHECK(Ry[m12] == 0.0f);
	CHECK(Ry[m13] == 0.0f);
	CHECK(Ry[m14] == 0.0f);
	CHECK(Ry[m15] == 1.0f);

	CHECK(eq(Rz[m0], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m1], 0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m2] == 0.0f);
	CHECK(Rz[m3] == 0.0f);
	CHECK(eq(Rz[m4], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m5], -0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m6] == 0.0f);
	CHECK(Rz[m7] == 0.0f);
	CHECK(Rz[m8] == 0.0f);
	CHECK(Rz[m9] == 0.0f);
	CHECK(Rz[m10] == 1.0f);
	CHECK(Rz[m11] == 0.0f);
	CHECK(Rz[m12] == 0.0f);
	CHECK(Rz[m13] == 0.0f);
	CHECK(Rz[m14] == 0.0f);
	CHECK(Rz[m15] == 1.0f);



} TEST_END
#endif


#if Special_RotXYZ_Constructor_Test_Enable 
TEST(RotXYZ_Constructor, matrix_tests, Special_RotXYZ_Constructor_Test_Enable)
{
	// Rot_X Type Constructor:
	Matrix Rx(Matrix::Rot1::X, 1.0471975512f);

	CHECK(Rx[m0] == 1.0f);
	CHECK(Rx[m1] == 0.0f);
	CHECK(Rx[m2] == 0.0f);
	CHECK(Rx[m3] == 0.0f);
	CHECK(Rx[m4] == 0.0f);
	CHECK(eq(Rx[m5], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rx[m6], 0.866f, MATH_TOLERANCE));
	CHECK(Rx[m7] == 0.0f);
	CHECK(Rx[m8] == 0.0f);
	CHECK(eq(Rx[m9], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rx[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Rx[m11] == 0.0f);
	CHECK(Rx[m12] == 0.0f);
	CHECK(Rx[m13] == 0.0f);
	CHECK(Rx[m14] == 0.0f);
	CHECK(Rx[m15] == 1.0f);

	Matrix Ry(Matrix::Rot1::Y, 2.0943951023f);

	CHECK(eq(Ry[m0], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m1] == 0.0f);
	CHECK(eq(Ry[m2], -0.866f, MATH_TOLERANCE));
	CHECK(Ry[m3] == 0.0f);
	CHECK(Ry[m4] == 0.0f);
	CHECK(Ry[m5] == 1.0f);
	CHECK(Ry[m6] == 0.0f);
	CHECK(Ry[m7] == 0.0f);
	CHECK(eq(Ry[m8], 0.866f, MATH_TOLERANCE));
	CHECK(Ry[m9] == 0.0f);
	CHECK(eq(Ry[m10], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m11] == 0.0f);
	CHECK(Ry[m12] == 0.0f);
	CHECK(Ry[m13] == 0.0f);
	CHECK(Ry[m14] == 0.0f);
	CHECK(Ry[m15] == 1.0f);

	Matrix Rz(Matrix::Rot1::Z, 2.3561944901f);

	CHECK(eq(Rz[m0], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m1], 0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m2] == 0.0f);
	CHECK(Rz[m3] == 0.0f);
	CHECK(eq(Rz[m4], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m5], -0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m6] == 0.0f);
	CHECK(Rz[m7] == 0.0f);
	CHECK(Rz[m8] == 0.0f);
	CHECK(Rz[m9] == 0.0f);
	CHECK(Rz[m10] == 1.0f);
	CHECK(Rz[m11] == 0.0f);
	CHECK(Rz[m12] == 0.0f);
	CHECK(Rz[m13] == 0.0f);
	CHECK(Rz[m14] == 0.0f);
	CHECK(Rz[m15] == 1.0f);

	Matrix N(Matrix::Rot3::XYZ, 1.0471975512f, 2.0943951023f, 2.3561944901f);
	Matrix M;

	M = Rx * Ry * Rz;

	CHECK(eq(N[m0],  0.3535f, MATH_TOLERANCE));
	CHECK(eq(N[m1], -0.3535f, MATH_TOLERANCE));
	CHECK(eq(N[m2], -0.8660f, MATH_TOLERANCE));
	CHECK(eq(N[m3],  0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m4], -0.8838f, MATH_TOLERANCE));
	CHECK(eq(N[m5],  0.1767f, MATH_TOLERANCE));
	CHECK(eq(N[m6], -0.4330f, MATH_TOLERANCE));
	CHECK(eq(N[m7],  0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m8],  0.3061f, MATH_TOLERANCE));
	CHECK(eq(N[m9],  0.9185f, MATH_TOLERANCE));
	CHECK(eq(N[m10],-0.25f, MATH_TOLERANCE));
	CHECK(eq(N[m11], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m12], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m13], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m14], 0.0f, MATH_TOLERANCE));
	CHECK(eq(N[m15], 1.0f, MATH_TOLERANCE));

	CHECK(eq(M[m0], 0.3535f, MATH_TOLERANCE));
	CHECK(eq(M[m1], -0.3535f, MATH_TOLERANCE));
	CHECK(eq(M[m2], -0.8660f, MATH_TOLERANCE));
	CHECK(eq(M[m3], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m4], -0.8838f, MATH_TOLERANCE));
	CHECK(eq(M[m5], 0.1767f, MATH_TOLERANCE));
	CHECK(eq(M[m6], -0.4330f, MATH_TOLERANCE));
	CHECK(eq(M[m7], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m8], 0.3061f, MATH_TOLERANCE));
	CHECK(eq(M[m9], 0.9185f, MATH_TOLERANCE));
	CHECK(eq(M[m10], -0.25f, MATH_TOLERANCE));
	CHECK(eq(M[m11], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m12], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m13], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m14], 0.0f, MATH_TOLERANCE));
	CHECK(eq(M[m15], 1.0f, MATH_TOLERANCE));

	CHECK(Rx[m0] == 1.0f);
	CHECK(Rx[m1] == 0.0f);
	CHECK(Rx[m2] == 0.0f);
	CHECK(Rx[m3] == 0.0f);
	CHECK(Rx[m4] == 0.0f);
	CHECK(eq(Rx[m5], 0.5f, MATH_TOLERANCE));
	CHECK(eq(Rx[m6], 0.866f, MATH_TOLERANCE));
	CHECK(Rx[m7] == 0.0f);
	CHECK(Rx[m8] == 0.0f);
	CHECK(eq(Rx[m9], -0.866f, MATH_TOLERANCE));
	CHECK(eq(Rx[m10], 0.5f, MATH_TOLERANCE));
	CHECK(Rx[m11] == 0.0f);
	CHECK(Rx[m12] == 0.0f);
	CHECK(Rx[m13] == 0.0f);
	CHECK(Rx[m14] == 0.0f);
	CHECK(Rx[m15] == 1.0f);

	CHECK(eq(Ry[m0], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m1] == 0.0f);
	CHECK(eq(Ry[m2], -0.866f, MATH_TOLERANCE));
	CHECK(Ry[m3] == 0.0f);
	CHECK(Ry[m4] == 0.0f);
	CHECK(Ry[m5] == 1.0f);
	CHECK(Ry[m6] == 0.0f);
	CHECK(Ry[m7] == 0.0f);
	CHECK(eq(Ry[m8], 0.866f, MATH_TOLERANCE));
	CHECK(Ry[m9] == 0.0f);
	CHECK(eq(Ry[m10], -0.5f, MATH_TOLERANCE));
	CHECK(Ry[m11] == 0.0f);
	CHECK(Ry[m12] == 0.0f);
	CHECK(Ry[m13] == 0.0f);
	CHECK(Ry[m14] == 0.0f);
	CHECK(Ry[m15] == 1.0f);

	CHECK(eq(Rz[m0], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m1], 0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m2] == 0.0f);
	CHECK(Rz[m3] == 0.0f);
	CHECK(eq(Rz[m4], -0.7071f, MATH_TOLERANCE));
	CHECK(eq(Rz[m5], -0.7071f, MATH_TOLERANCE));
	CHECK(Rz[m6] == 0.0f);
	CHECK(Rz[m7] == 0.0f);
	CHECK(Rz[m8] == 0.0f);
	CHECK(Rz[m9] == 0.0f);
	CHECK(Rz[m10] == 1.0f);
	CHECK(Rz[m11] == 0.0f);
	CHECK(Rz[m12] == 0.0f);
	CHECK(Rz[m13] == 0.0f);
	CHECK(Rz[m14] == 0.0f);
	CHECK(Rz[m15] == 1.0f);



} TEST_END
#endif


#if Special_isEqual_false2_Test_Enable
TEST(isEqual_false2, matrix_tests, Special_isEqual_false2_Test_Enable)
{
	Vect V0(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 2.0f);
	CHECK(A[m2] == 3.0f);
	CHECK(A[m3] == 4.0f);
	CHECK(A[m4] == 5.0f);
	CHECK(A[m5] == 6.0f);
	CHECK(A[m6] == 7.0f);
	CHECK(A[m7] == 8.0f);
	CHECK(A[m8] == 9.0f);
	CHECK(A[m9] == 10.0f);
	CHECK(A[m10] == 11.0f);
	CHECK(A[m11] == 12.0f);
	CHECK(A[m12] == 13.0f);
	CHECK(A[m13] == 14.0f);
	CHECK(A[m14] == 15.0f);
	CHECK(A[m15] == 16.0f);

	Vect V4(20.0f, 21.0f, 22.0f, 23.0f);
	Vect V5(24.0f, 25.0f, 26.0f, 27.0f);
	Vect V6(28.0f, 29.0f, 30.0f, 31.0f);
	Vect V7(32.0f, 33.0f, 34.0f, 35.0f);

	Matrix B(V4, V5, V6, V7);

	CHECK(B[m0] == 20.0f);
	CHECK(B[m1] == 21.0f);
	CHECK(B[m2] == 22.0f);
	CHECK(B[m3] == 23.0f);
	CHECK(B[m4] == 24.0f);
	CHECK(B[m5] == 25.0f);
	CHECK(B[m6] == 26.0f);
	CHECK(B[m7] == 27.0f);
	CHECK(B[m8] == 28.0f);
	CHECK(B[m9] == 29.0f);
	CHECK(B[m10] == 30.0f);
	CHECK(B[m11] == 31.0f);
	CHECK(B[m12] == 32.0f);
	CHECK(B[m13] == 33.0f);
	CHECK(B[m14] == 34.0f);
	CHECK(B[m15] == 35.0f);

	const bool value = A.isEqual(B);

	CHECK(value == false);
} TEST_END
#endif

#if Special_isEqual_true_Test_Enable
TEST(isEqual_true, matrix_tests, Special_isEqual_true_Test_Enable)
{
	Vect V0(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 2.0f);
	CHECK(A[m2] == 3.0f);
	CHECK(A[m3] == 4.0f);
	CHECK(A[m4] == 5.0f);
	CHECK(A[m5] == 6.0f);
	CHECK(A[m6] == 7.0f);
	CHECK(A[m7] == 8.0f);
	CHECK(A[m8] == 9.0f);
	CHECK(A[m9] == 10.0f);
	CHECK(A[m10] == 11.0f);
	CHECK(A[m11] == 12.0f);
	CHECK(A[m12] == 13.0f);
	CHECK(A[m13] == 14.0f);
	CHECK(A[m14] == 15.0f);
	CHECK(A[m15] == 16.0f);

	Vect V4(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V5(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V6(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V7(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix B(V4, V5, V6, V7);

	CHECK(B[m0] == 1.0f);
	CHECK(B[m1] == 2.0f);
	CHECK(B[m2] == 3.0f);
	CHECK(B[m3] == 4.0f);
	CHECK(B[m4] == 5.0f);
	CHECK(B[m5] == 6.0f);
	CHECK(B[m6] == 7.0f);
	CHECK(B[m7] == 8.0f);
	CHECK(B[m8] == 9.0f);
	CHECK(B[m9] == 10.0f);
	CHECK(B[m10] == 11.0f);
	CHECK(B[m11] == 12.0f);
	CHECK(B[m12] == 13.0f);
	CHECK(B[m13] == 14.0f);
	CHECK(B[m14] == 15.0f);
	CHECK(B[m15] == 16.0f);

	const bool value = A.isEqual(B);

	CHECK(value == true);
} TEST_END
#endif

#if Special_isIdentity_false_Enable_Test
TEST(isIdentity_false, matrix_tests, Special_isIdentity_false_Enable_Test)
{
	Vect V0(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 2.0f);
	CHECK(A[m2] == 3.0f);
	CHECK(A[m3] == 4.0f);
	CHECK(A[m4] == 5.0f);
	CHECK(A[m5] == 6.0f);
	CHECK(A[m6] == 7.0f);
	CHECK(A[m7] == 8.0f);
	CHECK(A[m8] == 9.0f);
	CHECK(A[m9] == 10.0f);
	CHECK(A[m10] == 11.0f);
	CHECK(A[m11] == 12.0f);
	CHECK(A[m12] == 13.0f);
	CHECK(A[m13] == 14.0f);
	CHECK(A[m14] == 15.0f);
	CHECK(A[m15] == 16.0f);

	const bool value = A.isIdentity();

	CHECK(value == false);
} TEST_END
#endif

#if Special_isIdentity_true_Enable_Test
TEST(isIdentity_true, matrix_tests, Special_isIdentity_true_Enable_Test)
{
	Vect V0(1.0f, 0.0f, 0.0f, 0.0f);
	Vect V1(0.0f, 1.0f, 0.0f, 0.0f);
	Vect V2(0.0f, 0.0f, 1.0f, 0.0f);
	Vect V3(0.0f, 0.0f, 0.0f, 1.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 0.0f);
	CHECK(A[m2] == 0.0f);
	CHECK(A[m3] == 0.0f);
	CHECK(A[m4] == 0.0f);
	CHECK(A[m5] == 1.0f);
	CHECK(A[m6] == 0.0f);
	CHECK(A[m7] == 0.0f);
	CHECK(A[m8] == 0.0f);
	CHECK(A[m9] == 0.0f);
	CHECK(A[m10] == 1.0f);
	CHECK(A[m11] == 0.0f);
	CHECK(A[m12] == 0.0f);
	CHECK(A[m13] == 0.0f);
	CHECK(A[m14] == 0.0f);
	CHECK(A[m15] == 1.0f);

	const bool value = A.isIdentity();

	CHECK(value == true);
} TEST_END
#endif

// ---  End of File ---------------
