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
#if Matrix_SET_Identity_Test_Enable
TEST(Matrix_SET_Identity, matrix_tests, Matrix_SET_Identity_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	A.set(Matrix::Special::Identity);

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

#if Matrix_SET_Zero_Test_Enable
TEST(Matrix_SET_Zero, matrix_tests, Matrix_SET_Zero_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	A.set(Matrix::Special::Zero);

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

#if Matrix_SET_Trans_Test_Enable
TEST(Matrix_SET_Trans, matrix_tests, Matrix_SET_Trans_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	A.set(Matrix::Trans::XYZ, 2.0f, 3.0f, 4.0f);

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

#if Matrix_SET_Trans_Vect_Test_Enable
TEST(Matrix_SET_Trans_Vect, matrix_tests, Matrix_SET_Trans_Vect_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	Vect vTrans(2.0f, 3.0f, 4.0f);
	A.set(Matrix::Trans::XYZ, vTrans);

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

#if Matrix_SET_SCALE_Test_Enable
TEST(Matrix_SET_SCALE, matrix_tests, Matrix_SET_SCALE_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	A.set(Matrix::Scale::XYZ, 2.0f, 3.0f, 4.0f);

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

#if Matrix_SET_SCALE_Vect_Test_Enable
TEST(Matrix_SET_SCALE_Vect, matrix_tests, Matrix_SET_SCALE_Vect_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix A(V0, V1, V2, V3);

	CHECK(A[m0] == 17.0f);
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

	Vect vScale(2.0f, 3.0f, 4.0f);
	A.set(Matrix::Scale::XYZ, vScale);

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

#if Matrix_SET_RotX_SET_Test_Enable
TEST(RotX_SET, matrix_tests, Matrix_SET_RotX_SET_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix Rx(V0, V1, V2, V3);

	CHECK(Rx[m0] == 17.0f);
	CHECK(Rx[m1] == 2.0f);
	CHECK(Rx[m2] == 3.0f);
	CHECK(Rx[m3] == 4.0f);
	CHECK(Rx[m4] == 5.0f);
	CHECK(Rx[m5] == 6.0f);
	CHECK(Rx[m6] == 7.0f);
	CHECK(Rx[m7] == 8.0f);
	CHECK(Rx[m8] == 9.0f);
	CHECK(Rx[m9] == 10.0f);
	CHECK(Rx[m10] == 11.0f);
	CHECK(Rx[m11] == 12.0f);
	CHECK(Rx[m12] == 13.0f);
	CHECK(Rx[m13] == 14.0f);
	CHECK(Rx[m14] == 15.0f);
	CHECK(Rx[m15] == 16.0f);

	// Rot_X Type Constructor:
	Rx.set(Matrix::Rot1::X, 1.0471975512f);

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

#if Matrix_SET_RotY_SET_Test_Enable
TEST(RotY_SET, matrix_tests, Matrix_SET_RotY_SET_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix Ry(V0, V1, V2, V3);

	CHECK(Ry[m0] == 17.0f);
	CHECK(Ry[m1] == 2.0f);
	CHECK(Ry[m2] == 3.0f);
	CHECK(Ry[m3] == 4.0f);
	CHECK(Ry[m4] == 5.0f);
	CHECK(Ry[m5] == 6.0f);
	CHECK(Ry[m6] == 7.0f);
	CHECK(Ry[m7] == 8.0f);
	CHECK(Ry[m8] == 9.0f);
	CHECK(Ry[m9] == 10.0f);
	CHECK(Ry[m10] == 11.0f);
	CHECK(Ry[m11] == 12.0f);
	CHECK(Ry[m12] == 13.0f);
	CHECK(Ry[m13] == 14.0f);
	CHECK(Ry[m14] == 15.0f);
	CHECK(Ry[m15] == 16.0f);

	Ry.set(Matrix::Rot1::Y, 1.0471975512f);

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

#if Matrix_SET_RotZ_SET_Test_Enable
TEST(RotZ_SET, matrix_tests, Matrix_SET_RotZ_SET_Test_Enable)
{
	Vect V0(17.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

	Matrix Rz(V0, V1, V2, V3);

	CHECK(Rz[m0] == 17.0f);
	CHECK(Rz[m1] == 2.0f);
	CHECK(Rz[m2] == 3.0f);
	CHECK(Rz[m3] == 4.0f);
	CHECK(Rz[m4] == 5.0f);
	CHECK(Rz[m5] == 6.0f);
	CHECK(Rz[m6] == 7.0f);
	CHECK(Rz[m7] == 8.0f);
	CHECK(Rz[m8] == 9.0f);
	CHECK(Rz[m9] == 10.0f);
	CHECK(Rz[m10] == 11.0f);
	CHECK(Rz[m11] == 12.0f);
	CHECK(Rz[m12] == 13.0f);
	CHECK(Rz[m13] == 14.0f);
	CHECK(Rz[m14] == 15.0f);
	CHECK(Rz[m15] == 16.0f);

	Rz.set(Matrix::Rot1::Z, 1.0471975512f);

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

#if Matrix_SET_set_ROW_0_Test_Enable
TEST(set_ROW_0, matrix_tests, Matrix_SET_set_ROW_0_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	A.set(Matrix::Row::i0, V);

	CHECK(A[m0] == 20.0f);
	CHECK(A[m1] == 30.0f);
	CHECK(A[m2] == 40.0f);
	CHECK(A[m3] == 50.0f);
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
} TEST_END
#endif

#if Matrix_SET_set_ROW_1_Test_Enable
TEST(set_ROW_1, matrix_tests, Matrix_SET_set_ROW_1_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	A.set(Matrix::Row::i1, V);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 2.0f);
	CHECK(A[m2] == 3.0f);
	CHECK(A[m3] == 4.0f);
	CHECK(A[m4] == 20.0f);
	CHECK(A[m5] == 30.0f);
	CHECK(A[m6] == 40.0f);
	CHECK(A[m7] == 50.0f);
	CHECK(A[m8] == 9.0f);
	CHECK(A[m9] == 10.0f);
	CHECK(A[m10] == 11.0f);
	CHECK(A[m11] == 12.0f);
	CHECK(A[m12] == 13.0f);
	CHECK(A[m13] == 14.0f);
	CHECK(A[m14] == 15.0f);
	CHECK(A[m15] == 16.0f);
} TEST_END
#endif

#if Matrix_SET_set_ROW_2_Test_Enable
TEST(set_ROW_2, matrix_tests, Matrix_SET_set_ROW_2_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	A.set(Matrix::Row::i2, V);

	CHECK(A[m0] == 1.0f);
	CHECK(A[m1] == 2.0f);
	CHECK(A[m2] == 3.0f);
	CHECK(A[m3] == 4.0f);
	CHECK(A[m4] == 5.0f);
	CHECK(A[m5] == 6.0f);
	CHECK(A[m6] == 7.0f);
	CHECK(A[m7] == 8.0f);
	CHECK(A[m8] == 20.0f);
	CHECK(A[m9] == 30.0f);
	CHECK(A[m10] == 40.0f);
	CHECK(A[m11] == 50.0f);
	CHECK(A[m12] == 13.0f);
	CHECK(A[m13] == 14.0f);
	CHECK(A[m14] == 15.0f);
	CHECK(A[m15] == 16.0f);
} TEST_END
#endif

#if Matrix_SET_set_ROW_3_Test_Enable
TEST(set_ROW_3, matrix_tests, Matrix_SET_set_ROW_3_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	A.set(Matrix::Row::i3, V);

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
	CHECK(A[m12] == 20.0f);
	CHECK(A[m13] == 30.0f);
	CHECK(A[m14] == 40.0f);
	CHECK(A[m15] == 50.0f);
} TEST_END
#endif

#if Matrix_SET_get_ROW_0_Test_Enable
TEST(get_ROW_0, matrix_tests, Matrix_SET_get_ROW_0_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	V = A.get(Matrix::Row::i0);

	CHECK(V[x] == 1.0f);
	CHECK(V[y] == 2.0f);
	CHECK(V[z] == 3.0f);
	CHECK(V[w] == 4.0f);

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
} TEST_END
#endif

#if Matrix_SET_get_ROW_1_Test_Enable
TEST(get_ROW_1, matrix_tests, Matrix_SET_get_ROW_1_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	V = A.get(Matrix::Row::i1);

	CHECK(V[x] == 5.0f);
	CHECK(V[y] == 6.0f);
	CHECK(V[z] == 7.0f);
	CHECK(V[w] == 8.0f);

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
} TEST_END
#endif

#if Matrix_SET_get_ROW_2_Test_Enable
TEST(get_ROW_2, matrix_tests, Matrix_SET_get_ROW_2_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	V = A.get(Matrix::Row::i2);

	CHECK(V[x] == 9.0f);
	CHECK(V[y] == 10.0f);
	CHECK(V[z] == 11.0f);
	CHECK(V[w] == 12.0f);

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
} TEST_END
#endif

#if Matrix_SET_get_ROW_3_Test_Enable
TEST(get_ROW_3, matrix_tests, Matrix_SET_get_ROW_3_Test_Enable)
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

	Vect V(20.0f, 30.0f, 40.0, 50.0f);

	V = A.get(Matrix::Row::i3);

	CHECK( V[x] == 13.0f);
	CHECK( V[y] == 14.0f);
	CHECK( V[z] == 15.0f);
	CHECK( V[w] == 16.0f);

	CHECK( A[m0] == 1.0f );
	CHECK( A[m1] == 2.0f );
	CHECK( A[m2] == 3.0f );
	CHECK( A[m3] == 4.0f );
	CHECK( A[m4] == 5.0f );
	CHECK( A[m5] == 6.0f );
	CHECK( A[m6] == 7.0f );	
	CHECK( A[m7] == 8.0f );
	CHECK( A[m8] == 9.0f );
	CHECK( A[m9] == 10.0f );
	CHECK( A[m10] == 11.0f );
	CHECK( A[m11] == 12.0f );
	CHECK( A[m12] == 13.0f );
	CHECK( A[m13] == 14.0f );
	CHECK( A[m14] == 15.0f );
	CHECK( A[m15] == 16.0f );
} TEST_END
#endif

#if Matrix_SET_RotXYZ_SET_Test_Enable
TEST( RotXYZ_SET, matrix_tests, Matrix_SET_RotXYZ_SET_Test_Enable)
{
	Matrix Rx;
	Matrix Ry;
	Matrix Rz;

	// Rot_X Type Constructor:
	Rx.set(	Matrix::Rot1::X, MATH_PI3);

	CHECK( Rx[m0] ==  1.0f );
	CHECK( Rx[m1] ==  0.0f );
	CHECK( Rx[m2] ==  0.0f );
	CHECK( Rx[m3] ==  0.0f );
	CHECK( Rx[m4] ==  0.0f );
	CHECK( eq(Rx[m5],  0.5f,  MATH_TOLERANCE) );
	CHECK( eq(Rx[m6], 0.866f, MATH_TOLERANCE) );
	CHECK( Rx[m7] == 0.0f );
	CHECK( Rx[m8] == 0.0f );
	CHECK( eq(Rx[m9],-0.866f, MATH_TOLERANCE) );
	CHECK( eq(Rx[m10],0.5f  , MATH_TOLERANCE) );
	CHECK( Rx[m11] == 0.0f );
	CHECK( Rx[m12] == 0.0f );
	CHECK( Rx[m13] == 0.0f );
	CHECK( Rx[m14] == 0.0f );
	CHECK( Rx[m15] == 1.0f );

	Ry.set(Matrix::Rot1::Y, MATH_7PI8);

	CHECK( eq(Ry[m0],-0.9238f,  MATH_TOLERANCE) );
	CHECK( Ry[m1] ==  0.0f );
	CHECK( eq(Ry[m2],-0.3826f,MATH_TOLERANCE) );
	CHECK( Ry[m3] == 0.0f );
	CHECK( Ry[m4] == 0.0f );
	CHECK( Ry[m5] == 1.0f );
	CHECK( Ry[m6] == 0.0f );
	CHECK( Ry[m7] == 0.0f );
	CHECK( eq(Ry[m8],0.3826f,MATH_TOLERANCE) );
	CHECK( Ry[m9] ==  0.0f );
	CHECK( eq(Ry[m10],-0.9238f,   MATH_TOLERANCE) );
	CHECK( Ry[m11] == 0.0f );
	CHECK( Ry[m12] == 0.0f );
	CHECK( Ry[m13] == 0.0f );
	CHECK( Ry[m14] == 0.0f );
	CHECK( Ry[m15] == 1.0f );

	Rz.set(Matrix::Rot1::Z, MATH_PI2);

	CHECK( eq(Rz[m0],0.0f, MATH_TOLERANCE) );
	CHECK( eq(Rz[m1],1.0f, MATH_TOLERANCE) );
	CHECK( Rz[m2] == 0.0f );
	CHECK( Rz[m3] == 0.0f );
	CHECK( eq(Rz[m4],-1.0f, MATH_TOLERANCE) );
	CHECK( eq(Rz[m5], 0.0f,  MATH_TOLERANCE) );
	CHECK( Rz[m6] == 0.0f );
	CHECK( Rz[m7] == 0.0f );
	CHECK( Rz[m8] == 0.0f );
	CHECK( Rz[m9] == 0.0f );
	CHECK( Rz[m10] == 1.0f );
	CHECK( Rz[m11] == 0.0f );
	CHECK( Rz[m12] == 0.0f );
	CHECK( Rz[m13] == 0.0f );
	CHECK( Rz[m14] == 0.0f );
	CHECK( Rz[m15] == 1.0f );

	Matrix Rxyz;

	Rxyz = Rx * Ry * Rz;

	Matrix mTmp;

	mTmp.set(Matrix::Rot3::XYZ, MATH_PI3,MATH_7PI8, MATH_PI2);

	CHECK( eq( Rxyz[m0], mTmp[m0], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m1], mTmp[m1], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m2], mTmp[m2], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m3], mTmp[m3], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m4], mTmp[m4], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m5], mTmp[m5], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m6], mTmp[m6], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m7], mTmp[m7], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m8], mTmp[m8], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m9], mTmp[m9], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m10], mTmp[m10], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m11], mTmp[m11], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m12], mTmp[m12], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m13], mTmp[m13], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m14], mTmp[m14], MATH_TOLERANCE) );
	CHECK( eq( Rxyz[m15], mTmp[m15], MATH_TOLERANCE) );
} TEST_END
#endif

#if Matrix_SET_MatrixRotAxisAngle_set_Test_Enable
TEST( MatrixRotAxisAngle_set, matrix_tests, Matrix_SET_MatrixRotAxisAngle_set_Test_Enable)
{
	// Axis and Angle Type Constructor:
	Vect  v11( 2.0f, 53.0f, 24.0f);
	Matrix m54;
	
	m54.set( Matrix::Rot::AxisAngle, v11, MATH_PI3 );
			
	// => Vect  v11( 2.0f, 53.0f, 24.0f); \n"););
	// => Matrix m54(ROT_AXIS_ANGLE, v11, MATH_PI3 );\n"););
	CHECK( eq(m54[m0], 0.5005f, MATH_TOLERANCE) );
	CHECK( eq(m54[m1], 0.3726f, MATH_TOLERANCE) );
	CHECK( eq(m54[m2],-0.7813f, MATH_TOLERANCE) );
	CHECK( m54[m3] == 0.0f );
	CHECK( eq(m54[m4],-0.3413f, MATH_TOLERANCE) );
	CHECK( eq(m54[m5], 0.9144f, MATH_TOLERANCE) );
	CHECK( eq(m54[m6], 0.2174f, MATH_TOLERANCE) );
	CHECK( (m54[m7] == 0.0f) );
	CHECK( eq(m54[m8], 0.7955f, MATH_TOLERANCE) );
	CHECK( eq(m54[m9], 0.1579f, MATH_TOLERANCE) );
	CHECK( eq(m54[m10], 0.5849f, MATH_TOLERANCE) );
	CHECK( (m54[m11] == 0.0f) );
	CHECK( (m54[m12] == 0.0f) );
	CHECK( (m54[m13] == 0.0f) );
	CHECK( (m54[m14] == 0.0f) );
	CHECK( (m54[m15] == 1.0f) );
} TEST_END
#endif

#if Matrix_SET_MatrixRotOrient_set_Test_Enable
TEST( MatrixRotOrient_set, matrix_tests, Matrix_SET_MatrixRotOrient_set_Test_Enable)
{
	// Orientation Type Constructor:
	Vect  v15( 2.0f, 53.0f, 24.0f);
	Vect  v16( 0.0f, -24.0f, 53.0f);
	Matrix m56;
	m56.set(Matrix::Orient::LocalToWorld, v15, v16 );

	CHECK( eq(m56[m0],-0.9994f, MATH_TOLERANCE) );
	CHECK( eq(m56[m1], 0.0313f, MATH_TOLERANCE) );
	CHECK( eq(m56[m2], 0.0142f, MATH_TOLERANCE) );
	CHECK( (m56[m3] == 0.0f) );
	CHECK( eq(m56[m4], 0.0000f, MATH_TOLERANCE) );
	CHECK( eq(m56[m5],-0.4125f, MATH_TOLERANCE) );
	CHECK( eq(m56[m6], 0.9110f, MATH_TOLERANCE) );
	CHECK( (m56[m7] == 0.0f) );
	CHECK( eq(m56[m8], 0.0344f, MATH_TOLERANCE) );
	CHECK( eq(m56[m9], 0.9104f, MATH_TOLERANCE) );
	CHECK( eq(m56[m10], 0.4123f, MATH_TOLERANCE) );
	CHECK( (m56[m11] == 0.0f) );
	CHECK( (m56[m12] == 0.0f) );
	CHECK( (m56[m13] == 0.0f) );
	CHECK( (m56[m14] == 0.0f) );
	CHECK( (m56[m15] == 1.0f) );
} TEST_END
#endif

#if Matrix_SET_MatrixRotInverseOrient_set_Test_Enable
TEST( MatrixRotInverseOrient_set,matrix_tests, Matrix_SET_MatrixRotInverseOrient_set_Test_Enable)
{
	// Orientation Type Constructor:
	Vect  v17( 2.0f, 53.0f, 24.0f);
	Vect  v18( 0.0f, -24.0f, 53.0f);
	Matrix m57;
	m57.set(Matrix::Orient::WorldToLocal, v17, v18 );

	CHECK( eq(m57[m0],-0.9994f, MATH_TOLERANCE) );
	CHECK( eq(m57[m1], 0.0000f, MATH_TOLERANCE) );
	CHECK( eq(m57[m2], 0.0344f, MATH_TOLERANCE) );
	CHECK( (m57[m3] == 0.0f) );
	CHECK( eq(m57[m4], 0.0313f, MATH_TOLERANCE) );
	CHECK( eq(m57[m5],-0.4125f, MATH_TOLERANCE) );
	CHECK( eq(m57[m6], 0.9104f, MATH_TOLERANCE) );
	CHECK( (m57[m7] == 0.0f) );
	CHECK( eq(m57[m8], 0.0142f, MATH_TOLERANCE) );
	CHECK( eq(m57[m9], 0.9110f, MATH_TOLERANCE) );
	CHECK( eq(m57[m10], 0.4123f, MATH_TOLERANCE) );
	CHECK( (m57[m11] == 0.0f) );
	CHECK( (m57[m12] == 0.0f) );
	CHECK( (m57[m13] == 0.0f) );
	CHECK( (m57[m14] == 0.0f) );
	CHECK( (m57[m15] == 1.0f) );
} TEST_END
#endif

#if Matrix_SET_isEqual_false_Test_Enable
TEST(isEqual_false, matrix_tests, Matrix_SET_isEqual_false_Test_Enable)
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

	bool value = A.isEqual(B);

	CHECK(value == false);
} TEST_END
#endif

#if Matrix_SET_set_Vectors2_Test_Enable
TEST(set_Vectors2, matrix_tests, Matrix_SET_set_Vectors2_Test_Enable)
{
	Vect V0(1.0f, 2.0f, 3.0f, 4.0f);
	Vect V1(5.0f, 6.0f, 7.0f, 8.0f);
	Vect V2(9.0f, 10.0f, 11.0f, 12.0f);
	Vect V3(13.0f, 14.0f, 15.0f, 16.0f);

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

	A.set(V0, V1, V2, V3);

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
} TEST_END
#endif

// ---  End of File ---------------
