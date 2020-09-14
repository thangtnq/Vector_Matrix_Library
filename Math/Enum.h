//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_ENUM_H
#define ENGINE_MATH_ENUM_H

//--------------------------------------------------
// Not using enum defined class for brevity in user code:
//
//      Vect A;
//      A[x] = 6;
//
//      Matrix M;
//      float val = M[m5];
//
//  If enum were defined in class:
//
//      A[Vect::x] = 6;       <------- YUCK
//      val = M[Matrix::m5];  <------- YUCK
//
//--------------------------------------------------
namespace Azul
{
	enum x_enum
	{
		x = 0,
		X = 0,
		vx = 0,
	};

	enum y_enum
	{
		y = 0,
		Y = 0,
		vy = 0
	};

	enum z_enum
	{
		z = 0,
		Z = 0,
		vz = 0
	};

	enum w_enum
	{
		w = 0,
		W = 0,
		real = 0
	};

	enum m0_enum
	{
		m0
	};

	enum m1_enum
	{
		m1
	};

	enum m2_enum
	{
		m2
	};

	enum m3_enum
	{
		m3
	};

	enum m4_enum
	{
		m4
	};

	enum m5_enum
	{
		m5
	};

	enum m6_enum
	{
		m6
	};

	enum m7_enum
	{
		m7
	};

	enum m8_enum
	{
		m8
	};

	enum m9_enum
	{
		m9
	};

	enum m10_enum
	{
		m10
	};

	enum m11_enum
	{
		m11
	};

	enum m12_enum
	{
		m12
	};

	enum m13_enum
	{
		m13
	};

	enum m14_enum
	{
		m14
	};

	enum m15_enum
	{
		m15
	};
}

#endif

// ---  End of File ---------------
