//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_MATRIX_H
#define ENGINE_MATH_MATRIX_H

#include "Vect.h"

namespace Azul
{
	class Matrix final : public Align16
	{
	public:

		enum class Special
		{
			Zero,
			Identity
		};

		enum class Rot1
		{
			X,
			Y,
			Z
		};

		enum class Trans
		{
			XYZ
		};

		enum class Scale
		{
			XYZ
		};


		enum class Rot
		{
			AxisAngle,
		};

		enum class Orient
		{
			LocalToWorld,
			WorldToLocal
		};

		enum class Row
		{
			i0,
			i1,
			i2,
			i3
		};

		enum class Rot3
		{
			XYZ
			// future combos... here
		};

	public:

		// Do your magic here

		//default constructor
		Matrix();
		//copy constructor
		Matrix(const Matrix& m);
		//4 vectors constructor
		Matrix(const Vect& v0, const Vect& v1, const Vect& v2, const Vect& v3);
		//special ZERO constructor;
		Matrix(Matrix::Special type);
		//trans constructor - 4 arguments
		Matrix(Matrix::Trans type, const float& a, const float& b, const float& c);

		//trans constructor with vector
		Matrix(Matrix::Trans type, const Vect& v);
		//scale constructor - 4 arguments
		Matrix(Matrix::Scale type, const float& a, const float& b, const float& c);
		//scale constructor with vector
		Matrix(Matrix::Scale type, const Vect& v);
		//rotation contructor
		Matrix(Matrix::Rot1 type, const float& v);
		//rot1 constructor
		Matrix(Matrix::Rot type, const Vect& v, const float& t);
		//rot3 contructor
		Matrix(Matrix::Rot3 type, const float& a, const float& b, const float& c);
		//rot orient constructor
		Matrix(Matrix::Orient type, const Vect& v1, const Vect& v2);
		//asssignment operator
		const Matrix& operator=(const Matrix& m);

		//destructor
		~Matrix();



		//unary operator
		Matrix operator+();
		Matrix operator-();

		//Vector mult Matrix
		friend Vect operator*(const Vect& v, const Matrix& m);
		//Vector mult equal Matrix
		friend void operator*= (Vect& v, const Matrix& m);

		//Matrix + Matrix
		Matrix operator+(const Matrix& m);

		//Matrix += Matrix
		void operator+=(const Matrix& m);

		//Matrix - Matrix
		Matrix operator-(const Matrix& m);

		//Matrix -= Matrix
		void operator-=(const Matrix& m);

		//Matrix mult Matrix
		Matrix operator*(const Matrix& m);

		//Matrix mult equal Matrix
		void operator*=(const Matrix& m);

		//scale operator
		Matrix operator*(const float& t);

		//scale equal operator
		void operator*=(const float& t);

		//friend scale
		friend Matrix operator*(const float&, const Matrix& m);

		//matrix determinant
		float det() const;


		//matrix transpose
		void T();

		//matrix get tranpose
		Matrix getT();

		//row setter and getter
		void set(Matrix::Row type, const Vect& v);
		Vect get(Matrix::Row type) const;

		//set Identity and Zero
		void set(Matrix::Special type);

		//set trans - 4 arguments
		void set(Matrix::Trans type, const float& a, const float& b, const float& c);
		//set trans with vector
		void set(Matrix::Trans type, const Vect& v);

		//set scale - 4 arguments
		void set(Matrix::Scale type, const float& a, const float& b, const float& c);

		//set scale with vector
		void set(Matrix::Scale type, const Vect& v);

		//set rotation
		void set(Matrix::Rot1 type, const float& a);


		//set rot3
		void set(Matrix::Rot3 type, const float& a, const float& b, const float& c);

		//set rotaxisangle
		void set(Matrix::Rot type, const Vect& v, const float& t);

		//set rotorient
		void set(Matrix::Orient type, const Vect& v1, const Vect& v2);

		//void set 4 rows of matrix
		void set(const Vect& a, const Vect& b, const Vect& c, const Vect& d);

		//isEqual
		bool isEqual(const Matrix& m) const;

		//isIdentity without argument
		bool isIdentity() const;

		//isIdentity with argument
		bool isIdentity(const float& t) const;

		//inverse
		void inv();

		//get inverse
		Matrix getInv();

		
		//none const get methods
		float& m0();
		float& m1();
		float& m2();
		float& m3();
		float& m4();
		float& m5();
		float& m6();
		float& m7();
		float& m8();
		float& m9();
		float& m10();
		float& m11();
		float& m12();
		float& m13();
		float& m14();
		float& m15();

		//const get methods
		const float m0() const;
		const float m1() const;
		const float m2() const;
		const float m3() const;
		const float m4() const;
		const float m5() const;
		const float m6() const;
		const float m7() const;
		const float m8() const;
		const float m9() const;
		const float m10() const;
		const float m11() const;
		const float m12() const;
		const float m13() const;
		const float m14() const;
		const float m15() const;

		//bracket operator
		float& operator[](const enum m0_enum);
		float& operator[](const enum m1_enum);
		float& operator[](const enum m2_enum);
		float& operator[](const enum m3_enum);
		float& operator[](const enum m4_enum);
		float& operator[](const enum m5_enum);
		float& operator[](const enum m6_enum);
		float& operator[](const enum m7_enum);
		float& operator[](const enum m8_enum);
		float& operator[](const enum m9_enum);
		float& operator[](const enum m10_enum);
		float& operator[](const enum m11_enum);
		float& operator[](const enum m12_enum);
		float& operator[](const enum m13_enum);
		float& operator[](const enum m14_enum);
		float& operator[](const enum m15_enum);

		//const bracket operator
		const float& operator[](const enum m0_enum) const;
		const float& operator[](const enum m1_enum) const;
		const float& operator[](const enum m2_enum) const;
		const float& operator[](const enum m3_enum) const;
		const float& operator[](const enum m4_enum) const;
		const float& operator[](const enum m5_enum) const;
		const float& operator[](const enum m6_enum) const;
		const float& operator[](const enum m7_enum) const;
		const float& operator[](const enum m8_enum) const;
		const float& operator[](const enum m9_enum) const;
		const float& operator[](const enum m10_enum) const;
		const float& operator[](const enum m11_enum) const;
		const float& operator[](const enum m12_enum) const;
		const float& operator[](const enum m13_enum) const;
		const float& operator[](const enum m14_enum) const;
		const float& operator[](const enum m15_enum) const;
	
	private:
		
		//inverse helper
		Matrix inverseHelper();

		union
		{
			struct
			{
				Vect _v0;
				Vect _v1;
				Vect _v2;
				Vect _v3;
			};

			struct
			{
				float _m0;
				float _m1;
				float _m2;
				float _m3;
				float _m4;
				float _m5;
				float _m6;
				float _m7;
				float _m8;
				float _m9;
				float _m10;
				float _m11;
				float _m12;
				float _m13;
				float _m14;
				float _m15;
			};
		};
	};

	inline Vect operator*(const Vect& v, const Matrix& m) {
		float a = v.x() * m.m0() + v.y() * m.m4() + v.z() * m.m8() + v.w() * m.m12();
		float b = v.x() * m.m1() + v.y() * m.m5() + v.z() * m.m9() + v.w() * m.m13();
		float c = v.x() * m.m2() + v.y() * m.m6() + v.z() * m.m10() + v.w() * m.m14();
		float d = v.x() * m.m3() + v.y() * m.m7() + v.z() * m.m11() + v.w() * m.m15();
		return Vect(a, b, c, d);
	}

	inline void operator*=(Vect& v, const Matrix& m) {
		const float a = v.x() * m.m0() + v.y() * m.m4() + v.z() * m.m8() + v.w() * m.m12();
		const float b = v.x() * m.m1() + v.y() * m.m5() + v.z() * m.m9() + v.w() * m.m13();
		const float c = v.x() * m.m2() + v.y() * m.m6() + v.z() * m.m10() + v.w() * m.m14();
		const float d = v.x() * m.m3() + v.y() * m.m7() + v.z() * m.m11() + v.w() * m.m15();
		v.set(a, b, c, d);
	}

	inline Matrix operator*(const float& t, const Matrix& matrix) {
		Matrix A(matrix.get(Matrix::Row::i0) * t, matrix.get(Matrix::Row::i1) * t,
			matrix.get(Matrix::Row::i2) * t, matrix.get(Matrix::Row::i3) * t);
		A._m3 = matrix._m3 * t;
		A._m7 = matrix._m7 * t;
		A._m11 = matrix._m11 * t;
		A._m15 = matrix._m15 * t;
		return A;
	}
}

#endif

// ---  End of File ---------------
