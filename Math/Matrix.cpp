//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"

namespace Azul
{
	// Do your magic here
	
	Matrix::Matrix() :
		_m0(0.0f), _m1(0.0f), _m2(0.0f), _m3(0.0f), _m4(0.0f),
		_m5(0.0f), _m6(0.0f), _m7(0.0f), _m8(0.0f), _m9(0.0f),
		_m10(0.0f), _m11(0.0f), _m12(0.0f), _m13(0.0f), _m14(0.0f), _m15(0.0f) {}

	//copy constructor
	Matrix::Matrix(const Matrix& m) :
		_v0(m._v0), _v1(m._v1), _v2(m._v2), _v3(m._v3)
	{}

	//4 vectors constructor
	Matrix::Matrix(const Vect& v0, const Vect& v1, const Vect& v2, const Vect& v3) :
		_v0(v0), _v1(v1), _v2(v2), _v3(v3)
	{}

	//special ZERO constructor
	Matrix::Matrix(Matrix::Special type)
	{
		this->set(type);
	}

	//trans constructor with 4 arguments
	Matrix::Matrix(Matrix::Trans type, const float& a, const float& b, const float& c) {
		this->set(type, a, b, c);
	}

	//trans constructor with vector
	Matrix::Matrix(Matrix::Trans type, const Vect& v) {
		this->set(type, v);
	}

	//scale constructor with 4 arguments
	Matrix::Matrix(Matrix::Scale type, const float& a, const float& b, const float& c) {
		this->set(type, a, b, c);
	}

	//trans constructor with vector
	Matrix::Matrix(Matrix::Scale type, const Vect& v) {
		this->set(type, v);
	}

	//rotation constructor
	Matrix::Matrix(Matrix::Rot1 type, const float& t) {
		switch (type) {
		case Matrix::Rot1::X:
			this->set(type, t);
			break;
		case Matrix::Rot1::Y:
			this->set(type, t);
			break;
		case Matrix::Rot1::Z:
			this->set(type, t);
			break;
		}

	}

	//rot constructor
	Matrix::Matrix(Matrix::Rot type, const Vect& v, const float& t) {
		this->set(type, v, t);
	}

	//rot3 constructor
	Matrix::Matrix(Matrix::Rot3 type, const float& a, const float& b, const float& c) {
		this->set(type, a, b, c);
	}

	//rot orient constructor
	Matrix::Matrix(Matrix::Orient type, const Vect& v1, const Vect& v2) {
		this->set(type, v1, v2);
	}


	//assignment operator
	const Matrix& Matrix::operator=(const Matrix& m) {
		this->_v0 = m._v0;
		this->_v1 = m._v1;
		this->_v2 = m._v2;
		this->_v3 = m._v3;
		return *this;
	}

	//destructor
	Matrix::~Matrix() {}


	//unary operator
	Matrix Matrix::operator+() {
		return Matrix(this->_v0, this->_v1, this->_v2, this->_v3);
	}

	Matrix Matrix::operator-() {
		Matrix B(this->_v0 * (-1), this->_v1 * (-1), this->_v2 * (-1), this->_v3 * (-1));
		B[m3_enum::m3] = -this->_m3;
		B[m7_enum::m7] = -this->_m7;
		B[m11_enum::m11] = -this->_m11;
		B[m15_enum::m15] = -this->_m15;
		return B;
	}

	//Matrix + Matrix
	Matrix Matrix::operator+(const Matrix& m) {
		return Matrix(Vect(this->_m0 + m.m0(), this->_m1 + m.m1(), this->_m2 + m.m2(), this->_m3 + m.m3()),
			Vect(this->_m4 + m.m4(), this->_m5 + m.m5(), this->_m6 + m.m6(), this->_m7 + m.m7()),
			Vect(this->_m8 + m.m8(), this->_m9 + m.m9(), this->_m10 + m.m10(), this->_m11 + m.m11()),
			Vect(this->_m12 + m.m12(), this->_m13 + m.m13(), this->_m14 + m.m14(), this->_m15 + m.m15()));
	}

	//Matrix += Matrix
	void Matrix::operator+=(const Matrix& m) {
		this->_m0 += m.m0();
		this->_m1 += m.m1();
		this->_m2 += m.m2();
		this->_m3 += m.m3();
		this->_m4 += m.m4();
		this->_m5 += m.m5();
		this->_m6 += m.m6();
		this->_m7 += m.m7();
		this->_m8 += m.m8();
		this->_m9 += m.m9();
		this->_m10 += m.m10();
		this->_m11 += m.m11();
		this->_m12 += m.m12();
		this->_m13 += m.m13();
		this->_m14 += m.m14();
		this->_m15 += m.m15();
	}

	//Matrix - Matrix
	Matrix Matrix::operator-(const Matrix& m) {
		return Matrix(Vect(this->_m0 - m.m0(), this->_m1 - m.m1(), this->_m2 - m.m2(), this->_m3 - m.m3()),
			Vect(this->_m4 - m.m4(), this->_m5 - m.m5(), this->_m6 - m.m6(), this->_m7 - m.m7()),
			Vect(this->_m8 - m.m8(), this->_m9 - m.m9(), this->_m10 - m.m10(), this->_m11 - m.m11()),
			Vect(this->_m12 - m.m12(), this->_m13 - m.m13(), this->_m14 - m.m14(), this->_m15 - m.m15()));
	}

	//Matrix += Matrix
	void Matrix::operator-=(const Matrix& m) {
		this->_m0 -= m.m0();
		this->_m1 -= m.m1();
		this->_m2 -= m.m2();
		this->_m3 -= m.m3();
		this->_m4 -= m.m4();
		this->_m5 -= m.m5();
		this->_m6 -= m.m6();
		this->_m7 -= m.m7();
		this->_m8 -= m.m8();
		this->_m9 -= m.m9();
		this->_m10 -= m.m10();
		this->_m11 -= m.m11();
		this->_m12 -= m.m12();
		this->_m13 -= m.m13();
		this->_m14 -= m.m14();
		this->_m15 -= m.m15();
	}

	//Matrix mult matrix
	Matrix Matrix::operator*(const Matrix& m) {
		Vect A(this->_m0 * m.m0() + this->_m1 * m.m4() + this->_m2 * m.m8() + this->_m3 * m.m12(),
			this->_m0 * m.m1() + this->_m1 * m.m5() + this->_m2 * m.m9() + this->_m3 * m.m13(),
			this->_m0 * m.m2() + this->_m1 * m.m6() + this->_m2 * m.m10() + this->_m3 * m.m14(),
			this->_m0 * m.m3() + this->_m1 * m.m7() + this->_m2 * m.m11() + this->_m3 * m.m15());

		Vect B(this->_m4 * m.m0() + this->_m5 * m.m4() + this->_m6 * m.m8() + this->_m7 * m.m12(),
			this->_m4 * m.m1() + this->_m5 * m.m5() + this->_m6 * m.m9() + this->_m7 * m.m13(),
			this->_m4 * m.m2() + this->_m5 * m.m6() + this->_m6 * m.m10() + this->_m7 * m.m14(),
			this->_m4 * m.m3() + this->_m5 * m.m7() + this->_m6 * m.m11() + this->_m7 * m.m15());

		Vect C(this->_m8 * m.m0() + this->_m9 * m.m4() + this->_m10 * m.m8() + this->_m11 * m.m12(),
			this->_m8 * m.m1() + this->_m9 * m.m5() + this->_m10 * m.m9() + this->_m11 * m.m13(),
			this->_m8 * m.m2() + this->_m9 * m.m6() + this->_m10 * m.m10() + this->_m11 * m.m14(),
			this->_m8 * m.m3() + this->_m9 * m.m7() + this->_m10 * m.m11() + this->_m11 * m.m15());

		Vect D(this->_m12 * m.m0() + this->_m13 * m.m4() + this->_m14 * m.m8() + this->_m15 * m.m12(),
			this->_m12 * m.m1() + this->_m13 * m.m5() + this->_m14 * m.m9() + this->_m15 * m.m13(),
			this->_m12 * m.m2() + this->_m13 * m.m6() + this->_m14 * m.m10() + this->_m15 * m.m14(),
			this->_m12 * m.m3() + this->_m13 * m.m7() + this->_m14 * m.m11() + this->_m15 * m.m15());
		return Matrix(A, B, C, D);
	}

	//Matrix mult equal Matrix
	void Matrix::operator*=(const Matrix& m) {
		Vect A(this->_m0 * m.m0() + this->_m1 * m.m4() + this->_m2 * m.m8() + this->_m3 * m.m12(),
			this->_m0 * m.m1() + this->_m1 * m.m5() + this->_m2 * m.m9() + this->_m3 * m.m13(),
			this->_m0 * m.m2() + this->_m1 * m.m6() + this->_m2 * m.m10() + this->_m3 * m.m14(),
			this->_m0 * m.m3() + this->_m1 * m.m7() + this->_m2 * m.m11() + this->_m3 * m.m15());

		Vect B(this->_m4 * m.m0() + this->_m5 * m.m4() + this->_m6 * m.m8() + this->_m7 * m.m12(),
			this->_m4 * m.m1() + this->_m5 * m.m5() + this->_m6 * m.m9() + this->_m7 * m.m13(),
			this->_m4 * m.m2() + this->_m5 * m.m6() + this->_m6 * m.m10() + this->_m7 * m.m14(),
			this->_m4 * m.m3() + this->_m5 * m.m7() + this->_m6 * m.m11() + this->_m7 * m.m15());

		Vect C(this->_m8 * m.m0() + this->_m9 * m.m4() + this->_m10 * m.m8() + this->_m11 * m.m12(),
			this->_m8 * m.m1() + this->_m9 * m.m5() + this->_m10 * m.m9() + this->_m11 * m.m13(),
			this->_m8 * m.m2() + this->_m9 * m.m6() + this->_m10 * m.m10() + this->_m11 * m.m14(),
			this->_m8 * m.m3() + this->_m9 * m.m7() + this->_m10 * m.m11() + this->_m11 * m.m15());

		Vect D(this->_m12 * m.m0() + this->_m13 * m.m4() + this->_m14 * m.m8() + this->_m15 * m.m12(),
			this->_m12 * m.m1() + this->_m13 * m.m5() + this->_m14 * m.m9() + this->_m15 * m.m13(),
			this->_m12 * m.m2() + this->_m13 * m.m6() + this->_m14 * m.m10() + this->_m15 * m.m14(),
			this->_m12 * m.m3() + this->_m13 * m.m7() + this->_m14 * m.m11() + this->_m15 * m.m15());

		this->set(Matrix::Row::i0, A);
		this->set(Matrix::Row::i1, B);
		this->set(Matrix::Row::i2, C);
		this->set(Matrix::Row::i3, D);
	}

	Matrix Matrix::operator*(const float& t) {
		Matrix A(this->_v0 * t, this->_v1 * t, this->_v2 * t, this->_v3 * t);
		A._m3 = this->_m3 * t;
		A._m7 = this->_m7 * t;
		A._m11 = this->_m11 * t;
		A._m15 = this->_m15 * t;
		return A;
	}

	void Matrix::operator*=(const float& t) {
		float temp1 = this->_m3 * t;
		float temp2 = this->_m7 * t;
		float temp3 = this->_m11 * t;
		float temp4 = this->_m15 * t;
		this->_v0 *= t;
		this->_v1 *= t;
		this->_v2 *= t;
		this->_v3 *= t;
		this->_m3 = temp1;
		this->_m7 = temp2;
		this->_m11 = temp3;
		this->_m15 = temp4;
	}

	//matrix determinant
	float Matrix::det() const {
		return _m0 * (_m5 * (_m10 * _m15 - _m11 * _m14) - _m6 * (_m9 * _m15 - _m11 * _m13) + _m7 * (_m9 * _m14 - _m10 * _m13)) -
			_m1 * (_m4 * (_m10 * _m15 - _m11 * _m14) - _m6 * (_m8 * _m15 - _m11 * _m12) + _m7 * (_m8 * _m14 - _m10 * _m12)) +
			_m2 * (_m4 * (_m9 * _m15 - _m11 * _m13) - _m5 * (_m8 * _m15 - _m11 * _m12) + _m7 * (_m8 * _m13 - _m9 * _m12)) -
			_m3 * (_m4 * (_m9 * _m14 - _m10 * _m13) - _m5 * (_m8 * _m14 - _m10 * _m12) + _m6 * (_m8 * _m13 - _m9 * _m12));
	}

	//matrix transpose
	void Matrix::T() {
		Matrix temp(*this);
		this->_m0 = temp.m0();
		this->_m1 = temp.m4();
		this->_m2 = temp.m8();
		this->_m3 = temp.m12();
		this->_m4 = temp.m1();
		this->_m5 = temp.m5();
		this->_m6 = temp.m9();
		this->_m7 = temp.m13();
		this->_m8 = temp.m2();
		this->_m9 = temp.m6();
		this->_m10 = temp.m10();
		this->_m11 = temp.m14();
		this->_m12 = temp.m3();
		this->_m13 = temp.m7();
		this->_m14 = temp.m11();
		this->_m15 = temp.m15();
	}

	Matrix Matrix::getT() {
		return Matrix(Vect(this->_m0, this->_m4, this->_m8, this->_m12),
			Vect(this->_m1, this->_m5, this->_m9, this->_m13),
			Vect(this->_m2, this->_m6, this->_m10, this->_m14),
			Vect(this->_m3, this->_m7, this->_m11, this->_m15));
	}

	//row setter and getter
	void Matrix::set(Matrix::Row type, const Vect& v) {
		switch (type)
		{
		case Matrix::Row::i0:
			this->_v0 = v;
			break;
		case Matrix::Row::i1:
			this->_v1 = v;
			break;
		case Matrix::Row::i2:
			this->_v2 = v;
			break;
		case Matrix::Row::i3:
			this->_v3 = v;
			break;
		default:
			break;
		}
	}

	Vect Matrix::get(Matrix::Row type) const {
		switch (type)
		{
		case Matrix::Row::i0:
			return this->_v0;
		case Matrix::Row::i1:
			return this->_v1;
		case Matrix::Row::i2:
			return this->_v2;
		case Matrix::Row::i3:
			return this->_v3;
		default:
			return Vect();
		}
	}

	//matrix identity and zero setter
	void Matrix::set(Matrix::Special type) {
		const Vect A(0.0f, 0.0f, 0.0f, 0.0f);
		this->set(Matrix::Row::i0, A);
		this->set(Matrix::Row::i1, A);
		this->set(Matrix::Row::i2, A);
		this->set(Matrix::Row::i3, A);
		if (type == Matrix::Special::Identity) {
			this->_m0 = this->_m5 = this->_m10 = this->_m15 = 1.0f;
		}
		else
			return;
	}

	//set trans - 4 arguments
	void Matrix::set(Matrix::Trans type, const float& a, const float& b, const float& c) {
		if (type == Matrix::Trans::XYZ) {
			this->set(Matrix::Special::Identity);
			this->_m12 = a;
			this->_m13 = b;
			this->_m14 = c;
		}
	}

	//set trans with vector
	void Matrix::set(Matrix::Trans type, const Vect& v) {
		if (type == Matrix::Trans::XYZ) {
			this->set(Matrix::Special::Identity);
			this->_v3 = v;
		}
	}

	//set scale - 4 arguments
	void Matrix::set(Matrix::Scale type, const float& a, const float& b, const float& c) {
		if (type == Matrix::Scale::XYZ) {
			this->set(Matrix::Special::Identity);
			this->_m0 = a;
			this->_m5 = b;
			this->_m10 = c;
		}
	}

	//set scale with vector
	void Matrix::set(Matrix::Scale type, const Vect& v) {
		if (type == Matrix::Scale::XYZ) {
			this->set(Matrix::Special::Identity);
			this->_m0 = v.x();
			this->_m5 = v.y();
			this->_m10 = v.z();
		}
	}

	//set rot1
	void Matrix::set(Matrix::Rot1 type, const float& t) {
		switch (type)
		{
		case Matrix::Rot1::X:
			this->_v0 = Vect(1.0f, 0.0f, 0.0f, 0.0f);
			this->_v1 = Vect(0.0f, cosf(t), sinf(t), 0.0f);
			this->_v2 = Vect(0.0f, -sinf(t), cosf(t), 0.0f);
			this->_v3 = Vect(0.0f, 0.0f, 0.0f, 1.0f);
			break;
		case Matrix::Rot1::Y:
			this->_v0 = Vect(cosf(t), 0.0f, -sinf(t), 0.0f);
			this->_v1 = Vect(0.0f, 1.0f, 0.0f, 0.0f);
			this->_v2 = Vect(sinf(t), 0.0f, cosf(t), 0.0f);
			this->_v3 = Vect(0.0f, 0.0f, 0.0f, 1.0f);
			break;
		case Matrix::Rot1::Z:
			this->_v0 = Vect(cosf(t), sinf(t), 0.0f, 0.0f);
			this->_v1 = Vect(-sinf(t), cosf(t), 0.0f, 0.0f);
			this->_v2 = Vect(0.0f, 0.0f, 1.0f, 0.0f);
			this->_v3 = Vect(0.0f, 0.0f, 0.0f, 1.0f);
			break;
		}
	}

	//set rot3 
	void Matrix::set(Matrix::Rot3 type, const float& a, const float& b, const float& c) {
		if (type == Matrix::Rot3::XYZ) {
			Vect temp(0.0f, 0.0f, 0.0f, 1.0f);
			Matrix A = Matrix(Vect(1, 0, 0, 0), Vect(0, cosf(a), sinf(a), 0), Vect(0, -sinf(a), cosf(a), 0), temp);
			Matrix B = Matrix(Vect(cosf(b), 0, -sinf(b), 0), Vect(0, 1, 0, 0), Vect(sinf(b), 0, cosf(b), 0), temp);
			Matrix C = Matrix(Vect(cosf(c), sinf(c), 0, 0), Vect(-sinf(c), cosf(c), 0, 0), Vect(0, 0, 1, 0), temp);
			*this = A * B * C;
		}
	}

	//set rotaxisangle
	void Matrix::set(Matrix::Rot type, const Vect& v, const float& t) {
		if (type == Matrix::Rot::AxisAngle) {
			Vect temp(v);
			temp.norm();

			float x = temp.x();
			float y = temp.y();
			float z = temp.z();

			this->_m0 = cosf(t) + (x * x) * (1 - cosf(t));
			this->_m1 = x * y * (1 - cosf(t)) + z * sinf(t);
			this->_m2 = x * z * (1 - cosf(t)) - y * sinf(t);
			this->_m4 = x * y * (1 - cosf(t)) - z * sinf(t);
			this->_m5 = cosf(t) + y * y * (1 - cosf(t));
			this->_m6 = y * z * (1 - cosf(t)) + x * sinf(t);
			this->_m8 = x * z * (1 - cosf(t)) + y * sinf(t);
			this->_m9 = y * z * (1 - cosf(t)) - x * sinf(t);
			this->_m10 = cosf(t) + z * z * (1 - cosf(t));
			this->_m3 = this->_m7 = this->_m11 = this->_m12 = this->_m13 = this->_m14 = 0.0f;
			this->_m15 = 1.0f;
		}
	}


	//set rotorient
	void Matrix::set(Matrix::Orient type, const Vect& v1, const Vect& v2) {
		const Vect z = v1.getNorm();
		Vect x = v2.cross(z);
		x.norm();
		Vect y = z.cross(x);
		y.norm();
		this->set(x, y, z, Vect(0, 0, 0, 1));
		this->_m3 = this->_m7 = this->_m11 = 0.0f;
		this->_m15 = 1.0f;
		switch (type) {
		case Matrix::Orient::LocalToWorld:
			break;
		case Matrix::Orient::WorldToLocal:
			this->T();
			break;
		}
	}

	//set 4 vectors
	void Matrix::set(const Vect& a, const Vect& b, const Vect& c, const Vect& d) {
		this->_v0.set(a);
		this->_v1.set(b);
		this->_v2.set(c);
		this->_v3.set(d);
	}

	bool Matrix::isEqual(const Matrix& m) const {
		return this->_v0.isEqual(m.get(Matrix::Row::i0))
			&& this->_v1.isEqual(m.get(Matrix::Row::i1))
			&& this->_v2.isEqual(m.get(Matrix::Row::i2))
			&& this->_v3.isEqual(m.get(Matrix::Row::i3));
	}


	//isIdentity without argument
	bool Matrix::isIdentity()const {
		Matrix identity(Matrix::Special::Identity);
		return this->isEqual(identity);
	}

	bool Matrix::isIdentity(const float& t) const {
		Matrix identity(Matrix::Special::Identity);
		return this->_v0.isEqual(identity.get(Matrix::Row::i0), t)
			&& this->_v1.isEqual(identity.get(Matrix::Row::i1), t)
			&& this->_v2.isEqual(identity.get(Matrix::Row::i2), t)
			&& this->_v3.isEqual(identity.get(Matrix::Row::i3), t);
	}

	Matrix Matrix::inverseHelper() {
		Matrix temp;
		temp._m0 = _m6 * _m11 * _m13 - _m7 * _m10 * _m13 + _m7 * _m9 * _m14 - _m5 * _m11 * _m14 - _m6 * _m9 * _m15 + _m5 * _m10 * _m15;
		temp._m1 = _m3 * _m10 * _m13 - _m2 * _m11 * _m13 - _m3 * _m9 * _m14 + _m1 * _m11 * _m14 + _m2 * _m9 * _m15 - _m1 * _m10 * _m15;
		temp._m2 = _m2 * _m7 * _m13 - _m3 * _m6 * _m13 + _m3 * _m5 * _m14 - _m1 * _m7 * _m14 - _m2 * _m5 * _m15 + _m1 * _m6 * _m15;
		temp._m3 = _m3 * _m6 * _m9 - _m2 * _m7 * _m9 - _m3 * _m5 * _m10 + _m1 * _m7 * _m10 + _m2 * _m5 * _m11 - _m1 * _m6 * _m11;
		temp._m4 = _m7 * _m10 * _m12 - _m6 * _m11 * _m12 - _m7 * _m8 * _m14 + _m4 * _m11 * _m14 + _m6 * _m8 * _m15 - _m4 * _m10 * _m15;
		temp._m5 = _m2 * _m11 * _m12 - _m3 * _m10 * _m12 + _m3 * _m8 * _m14 - _m0 * _m11 * _m14 - _m2 * _m8 * _m15 + _m0 * _m10 * _m15;
		temp._m6 = _m3 * _m6 * _m12 - _m2 * _m7 * _m12 - _m3 * _m4 * _m14 + _m0 * _m7 * _m14 + _m2 * _m4 * _m15 - _m0 * _m6 * _m15;
		temp._m7 = _m2 * _m7 * _m8 - _m3 * _m6 * _m8 + _m3 * _m4 * _m10 - _m0 * _m7 * _m10 - _m2 * _m4 * _m11 + _m0 * _m6 * _m11;
		temp._m8 = _m5 * _m11 * _m12 - _m7 * _m9 * _m12 + _m7 * _m8 * _m13 - _m4 * _m11 * _m13 - _m5 * _m8 * _m15 + _m4 * _m9 * _m15;
		temp._m9 = _m3 * _m9 * _m12 - _m1 * _m11 * _m12 - _m3 * _m8 * _m13 + _m0 * _m11 * _m13 + _m1 * _m8 * _m15 - _m0 * _m9 * _m15;
		temp._m10 = _m1 * _m7 * _m12 - _m3 * _m5 * _m12 + _m3 * _m4 * _m13 - _m0 * _m7 * _m13 - _m1 * _m4 * _m15 + _m0 * _m5 * _m15;
		temp._m11 = _m3 * _m5 * _m8 - _m1 * _m7 * _m8 - _m3 * _m4 * _m9 + _m0 * _m7 * _m9 + _m1 * _m4 * _m11 - _m0 * _m5 * _m11;
		temp._m12 = _m6 * _m9 * _m12 - _m5 * _m10 * _m12 - _m6 * _m8 * _m13 + _m4 * _m10 * _m13 + _m5 * _m8 * _m14 - _m4 * _m9 * _m14;
		temp._m13 = _m1 * _m10 * _m12 - _m2 * _m9 * _m12 + _m2 * _m8 * _m13 - _m0 * _m10 * _m13 - _m1 * _m8 * _m14 + _m0 * _m9 * _m14;
		temp._m14 = _m2 * _m5 * _m12 - _m1 * _m6 * _m12 - _m2 * _m4 * _m13 + _m0 * _m6 * _m13 + _m1 * _m4 * _m14 - _m0 * _m5 * _m14;
		temp._m15 = _m1 * _m6 * _m8 - _m2 * _m5 * _m8 + _m2 * _m4 * _m9 - _m0 * _m6 * _m9 - _m1 * _m4 * _m10 + _m0 * _m5 * _m10;
		return temp;
	}

	//inverse
	void Matrix::inv() {

		*this = 1.0f / this->det() * this->inverseHelper();
	}

	//get inverse
	Matrix Matrix::getInv() {
		return 1.0f / this->det() * this->inverseHelper();
	}


	//none const get method
	float& Matrix::m0() {
		return this->_m0;
	}

	float& Matrix::m1() {
		return this->_m1;
	}

	float& Matrix::m2() {
		return this->_m2;
	}

	float& Matrix::m3() {
		return this->_m3;
	}

	float& Matrix::m4() {
		return this->_m4;
	}

	float& Matrix::m5() {
		return this->_m5;
	}

	float& Matrix::m6() {
		return this->_m6;
	}

	float& Matrix::m7() {
		return this->_m7;
	}

	float& Matrix::m8() {
		return this->_m8;
	}

	float& Matrix::m9() {
		return this->_m9;
	}

	float& Matrix::m10() {
		return this->_m10;
	}

	float& Matrix::m11() {
		return this->_m11;
	}

	float& Matrix::m12() {
		return this->_m12;
	}

	float& Matrix::m13() {
		return this->_m13;
	}

	float& Matrix::m14() {
		return this->_m14;
	}

	float& Matrix::m15() {
		return this->_m15;
	}

	//const get method

	const float Matrix::m0() const {
		return this->_m0;
	}

	const float Matrix::m1() const {
		return this->_m1;
	}

	const float Matrix::m2() const {
		return this->_m2;
	}

	const float Matrix::m3() const {
		return this->_m3;
	}

	const float Matrix::m4() const {
		return this->_m4;
	}

	const float Matrix::m5() const {
		return this->_m5;
	}

	const float Matrix::m6() const {
		return this->_m6;
	}

	const float Matrix::m7() const {
		return this->_m7;
	}

	const float Matrix::m8() const {
		return this->_m8;
	}

	const float Matrix::m9() const {
		return this->_m9;
	}

	const float Matrix::m10() const {
		return this->_m10;
	}

	const float Matrix::m11() const {
		return this->_m11;
	}

	const float Matrix::m12() const {
		return this->_m12;
	}

	const float Matrix::m13() const {
		return this->_m13;
	}

	const float Matrix::m14() const {
		return this->_m14;
	}

	const float Matrix::m15() const {
		return this->_m15;
	}

	//bracket operator

	float& Matrix::operator[](const enum m0_enum) {
		return this->_m0;
	}

	float& Matrix::operator[](const enum m1_enum) {
		return this->_m1;
	}

	float& Matrix::operator[](const enum m2_enum) {
		return this->_m2;
	}

	float& Matrix::operator[](const enum m3_enum) {
		return this->_m3;
	}

	float& Matrix::operator[](const enum m4_enum) {
		return this->_m4;
	}

	float& Matrix::operator[](const enum m5_enum) {
		return this->_m5;
	}

	float& Matrix::operator[](const enum m6_enum) {
		return this->_m6;
	}

	float& Matrix::operator[](const enum m7_enum) {
		return this->_m7;
	}

	float& Matrix::operator[](const enum m8_enum) {
		return this->_m8;
	}

	float& Matrix::operator[](const enum m9_enum) {
		return this->_m9;
	}

	float& Matrix::operator[](const enum m10_enum) {
		return this->_m10;
	}

	float& Matrix::operator[](const enum m11_enum) {
		return this->_m11;
	}

	float& Matrix::operator[](const enum m12_enum) {
		return this->_m12;
	}

	float& Matrix::operator[](const enum m13_enum) {
		return this->_m13;
	}

	float& Matrix::operator[](const enum m14_enum) {
		return this->_m14;
	}

	float& Matrix::operator[](const enum m15_enum) {
		return this->_m15;
	}

	//const bracket operator
	const float& Matrix::operator[](const enum m0_enum) const {
		return this->_m0;
	}

	const float& Matrix::operator[](const enum m1_enum) const {
		return this->_m1;
	}

	const float& Matrix::operator[](const enum m2_enum) const {
		return this->_m2;
	}

	const float& Matrix::operator[](const enum m3_enum) const {
		return this->_m3;
	}

	const float& Matrix::operator[](const enum m4_enum) const {
		return this->_m4;
	}

	const float& Matrix::operator[](const enum m5_enum) const {
		return this->_m5;
	}

	const float& Matrix::operator[](const enum m6_enum) const {
		return this->_m6;
	}

	const float& Matrix::operator[](const enum m7_enum) const {
		return this->_m7;
	}

	const float& Matrix::operator[](const enum m8_enum) const {
		return this->_m8;
	}

	const float& Matrix::operator[](const enum m9_enum) const {
		return this->_m9;
	}

	const float& Matrix::operator[](const enum m10_enum) const {
		return this->_m10;
	}

	const float& Matrix::operator[](const enum m11_enum) const {
		return this->_m11;
	}

	const float& Matrix::operator[](const enum m12_enum) const {
		return this->_m12;
	}

	const float& Matrix::operator[](const enum m13_enum) const {
		return this->_m13;
	}

	const float& Matrix::operator[](const enum m14_enum) const {
		return this->_m14;
	}

	const float& Matrix::operator[](const enum m15_enum) const {
		return this->_m15;
	}
}

// ---  End of File ---------------
