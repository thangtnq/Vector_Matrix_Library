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

#if Trig_Cos_Enable
TEST(Cos, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::cos(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_PI;
	y = Trig::cos(x);
	CHECK(eq(y, -1.000000f, MATH_TOLERANCE));

	x = MATH_2PI;
	y = Trig::cos(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_PI2;
	y = Trig::cos(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI3;
	y = Trig::cos(x);
	CHECK(eq(y, 0.500000f, MATH_TOLERANCE));

	x = MATH_PI4;
	y = Trig::cos(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_PI8;
	y = Trig::cos(x);
	CHECK(eq(y, 0.923880f, MATH_TOLERANCE));

	x = MATH_2PI3;
	y = Trig::cos(x);
	CHECK(eq(y, -0.500000f, MATH_TOLERANCE));

	x = MATH_3PI4;
	y = Trig::cos(x);
	CHECK(eq(y, -0.707107f, MATH_TOLERANCE));

	x = MATH_2PI8;
	y = Trig::cos(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_3PI8;
	y = Trig::cos(x);
	CHECK(eq(y, 0.382683f, MATH_TOLERANCE));

	x = MATH_4PI8;
	y = Trig::cos(x);
	CHECK(eq(y, -0.000000f, MATH_TOLERANCE));

	x = MATH_5PI8;
	y = Trig::cos(x);
	CHECK(eq(y, -0.382683f, MATH_TOLERANCE));

	x = MATH_6PI8;
	y = Trig::cos(x);
	CHECK(eq(y, -0.707107f, MATH_TOLERANCE));

	x = MATH_7PI8;
	y = Trig::cos(x);
	CHECK(eq(y, -0.923880f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_Sin_Enable
TEST(Sin, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::sin(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI;
	y = Trig::sin(x);
	CHECK(eq(y, -0.000000f, MATH_TOLERANCE));

	x = MATH_2PI;
	y = Trig::sin(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI2;
	y = Trig::sin(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_PI3;
	y = Trig::sin(x);
	CHECK(eq(y, 0.866025f, MATH_TOLERANCE));

	x = MATH_PI4;
	y = Trig::sin(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.382683f, MATH_TOLERANCE));

	x = MATH_2PI3;
	y = Trig::sin(x);
	CHECK(eq(y, 0.866025f, MATH_TOLERANCE));

	x = MATH_3PI4;
	y = Trig::sin(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_2PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_3PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.923880f, MATH_TOLERANCE));

	x = MATH_4PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_5PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.923880f, MATH_TOLERANCE));

	x = MATH_6PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = MATH_7PI8;
	y = Trig::sin(x);
	CHECK(eq(y, 0.382683f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_Tan_Enable
TEST(Tan, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::tan(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI;
	y = Trig::tan(x);
	CHECK(eq(y, -0.000000f, MATH_TOLERANCE));

	x = MATH_2PI;
	y = Trig::tan(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	// gets close to blowing up
	//x = MATH_PI2;
	//y = Trig::tan(x);
	//CHECK(eq(y, -22877332.000000f, MATH_TOLERANCE));

	x = MATH_PI3;
	y = Trig::tan(x);
	CHECK(eq(y, 1.732051f, MATH_TOLERANCE));

	x = MATH_PI4;
	y = Trig::tan(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_PI8;
	y = Trig::tan(x);
	CHECK(eq(y, 0.414214f, MATH_TOLERANCE));

	x = MATH_2PI3;
	y = Trig::tan(x);
	CHECK(eq(y, -1.732051f, MATH_TOLERANCE));

	x = MATH_3PI4;
	y = Trig::tan(x);
	CHECK(eq(y, -1.000000f, MATH_TOLERANCE));

	x = MATH_2PI8;
	y = Trig::tan(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = MATH_3PI8;
	y = Trig::tan(x);
	CHECK(eq(y, 2.414214f, MATH_TOLERANCE));

	// gets close to blowing up
	//x = MATH_4PI8;
	//y = Trig::tan(x);
	//CHECK(eq(y, 22877332.000000f, MATH_TOLERANCE));

	x = MATH_5PI8;
	y = Trig::tan(x);
	CHECK(eq(y, -2.414214f, MATH_TOLERANCE));

	x = MATH_6PI8;
	y = Trig::tan(x);
	CHECK(eq(y, -1.000000f, MATH_TOLERANCE));

	x = MATH_7PI8;
	y = Trig::tan(x);
	CHECK(eq(y, -0.414214f, MATH_TOLERANCE));

} TEST_END
#endif


#if Trig_ATan_Enable
TEST(ATan, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::atan(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = 0.25f;
	y = Trig::atan(x);
	CHECK(eq(y, 0.244979f, MATH_TOLERANCE));

	x = 0.5f;
	y = Trig::atan(x);
	CHECK(eq(y, 0.463648f, MATH_TOLERANCE));

	x = 0.75f;
	y = Trig::atan(x);
	CHECK(eq(y, 0.643501f, MATH_TOLERANCE));

	x = 1.0f;
	y = Trig::atan(x);
	CHECK(eq(y, 0.785398f, MATH_TOLERANCE));

	x = -0.25f;
	y = Trig::atan(x);
	CHECK(eq(y, -0.244979f, MATH_TOLERANCE));

	x = -0.5f;
	y = Trig::atan(x);
	CHECK(eq(y, -0.463648f, MATH_TOLERANCE));

	x = -0.75f;
	y = Trig::atan(x);
	CHECK(eq(y, -0.643501f, MATH_TOLERANCE));

	x = -1.0f;
	y = Trig::atan(x);
	CHECK(eq(y, -0.785398f, MATH_TOLERANCE));

} TEST_END
#endif


#if Trig_ATan2_Enable
TEST(ATan2, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float x1;
	float y;

	// TODO: do more testing here... it will be big
	x = 0.0f;
	x1 = 0.0f;
	y = Trig::atan2(x, x1);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_ACos_Enable
TEST(ACos, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::acos(x);
	CHECK(eq(y, 1.570796f, MATH_TOLERANCE));

	x = 0.25f;
	y = Trig::acos(x);
	CHECK(eq(y, 1.318116f, MATH_TOLERANCE));

	x = 0.5f;
	y = Trig::acos(x);
	CHECK(eq(y, 1.047198f, MATH_TOLERANCE));

	x = 0.75f;
	y = Trig::acos(x);
	CHECK(eq(y, 0.722734f, MATH_TOLERANCE));

	x = 1.0f;
	y = Trig::acos(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = -0.25f;
	y = Trig::acos(x);
	CHECK(eq(y, 1.823477f, MATH_TOLERANCE));

	x = -0.5f;
	y = Trig::acos(x);
	CHECK(eq(y, 2.094395f, MATH_TOLERANCE));

	x = -0.75f;
	y = Trig::acos(x);
	CHECK(eq(y, 2.418858f, MATH_TOLERANCE));

	x = -1.0f;
	y = Trig::acos(x);
	CHECK(eq(y, 3.141593f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_ASin_Enable
TEST(ASin, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::asin(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = 0.25f;
	y = Trig::asin(x);
	CHECK(eq(y, 0.252680f, MATH_TOLERANCE));

	x = 0.5f;
	y = Trig::asin(x);
	CHECK(eq(y, 0.523599f, MATH_TOLERANCE));

	x = 0.75f;
	y = Trig::asin(x);
	CHECK(eq(y, 0.848062f, MATH_TOLERANCE));

	x = 1.0f;
	y = Trig::asin(x);
	CHECK(eq(y, 1.570796f, MATH_TOLERANCE));

	x = -0.25f;
	y = Trig::asin(x);
	CHECK(eq(y, -0.252680f, MATH_TOLERANCE));

	x = -0.5f;
	y = Trig::asin(x);
	CHECK(eq(y, -0.523599f, MATH_TOLERANCE));

	x = -0.75f;
	y = Trig::asin(x);
	CHECK(eq(y, -0.848062f, MATH_TOLERANCE));

	x = -1.0f;
	y = Trig::asin(x);
	CHECK(eq(y, -1.570796f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_CosSin_Enable
TEST(CosSin, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;
	float z;

	x = 0.0f;
	Trig::cossin(y,z,x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));
	CHECK(eq(z, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -1.000000f, MATH_TOLERANCE));
	CHECK(eq(z, -0.000000f, MATH_TOLERANCE));

	x = MATH_2PI;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));
	CHECK(eq(z, 0.000000f, MATH_TOLERANCE));

	x = MATH_PI2;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));
	CHECK(eq(z, 1.000000f, MATH_TOLERANCE))

	x = MATH_PI3;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.500000f, MATH_TOLERANCE));
	CHECK(eq(z, 0.866025f, MATH_TOLERANCE));

	x = MATH_PI4;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));
	CHECK(eq(z, 0.707107f, MATH_TOLERANCE));

	x = MATH_PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.923880f, MATH_TOLERANCE));
	CHECK(eq(z, 0.382683f, MATH_TOLERANCE));

	x = MATH_2PI3;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.500000f, MATH_TOLERANCE));
	CHECK(eq(z, 0.866025f, MATH_TOLERANCE));

	x = MATH_3PI4;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.707107f, MATH_TOLERANCE));
	CHECK(eq(z, 0.707107f, MATH_TOLERANCE));

	x = MATH_2PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));
	CHECK(eq(z, 0.707107f, MATH_TOLERANCE));

	x = MATH_3PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, 0.382683f, MATH_TOLERANCE));
	CHECK(eq(z, 0.923880f, MATH_TOLERANCE));

	x = MATH_4PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.000000f, MATH_TOLERANCE));
	CHECK(eq(z, 1.000000f, MATH_TOLERANCE));

	x = MATH_5PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.382683f, MATH_TOLERANCE));
	CHECK(eq(z, 0.923880f, MATH_TOLERANCE));

	x = MATH_6PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.707107f, MATH_TOLERANCE));
	CHECK(eq(z, 0.707107f, MATH_TOLERANCE));

	x = MATH_7PI8;
	Trig::cossin(y, z, x);
	CHECK(eq(y, -0.923880f, MATH_TOLERANCE));
	CHECK(eq(z, 0.382683f, MATH_TOLERANCE));

} TEST_END
#endif


#if Trig_Sqrt_Enable
TEST(Sqrt, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	x = 0.0f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = 0.25f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 0.500000f, MATH_TOLERANCE));

	x = 0.5f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 0.707107f, MATH_TOLERANCE));

	x = 0.75f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 0.866025f, MATH_TOLERANCE));

	x = 1.0f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = 25.0f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 5.000000f, MATH_TOLERANCE));

	x = 100.0f;
	y = Trig::sqrt(x);
	CHECK(eq(y, 10.000000f, MATH_TOLERANCE));

} TEST_END
#endif

#if Trig_RSqrt_Enable
TEST(RSqrt, trig_tests, Get_Accessors_Test_Enable)
{
	float x;
	float y;

	// blows up
	//x = 0.0f;
	//y = Trig::rsqrt(x);
	//CHECK(eq(y, 0.000000f, MATH_TOLERANCE));

	x = 0.25f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 2.000000f, MATH_TOLERANCE));

	x = 0.5f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 1.414214f, MATH_TOLERANCE));

	x = 0.75f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 1.154701f, MATH_TOLERANCE));

	x = 1.0f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 1.000000f, MATH_TOLERANCE));

	x = 25.0f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 0.200000f, MATH_TOLERANCE));

	x = 100.0f;
	y = Trig::rsqrt(x);
	CHECK(eq(y, 0.100000f, MATH_TOLERANCE));

} TEST_END
#endif


// ---  End of File ---------------
