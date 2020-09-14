//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"

namespace Azul
{

        // Do your magic here
	Vect::Vect() :
		_vx(0.0f), _vy(0.0f), _vz(0.0f), _vw(1.0f)
	{}

	//copy constructor
	Vect::Vect(const Vect& v)
	{
		_vx = v._vx;
		_vy = v._vy;
		_vz = v._vz;
		_vw = v._vw;
	}

	//3 argument constructor
	Vect::Vect(const float& x, const float& y, const float& z) :
		_vx(x), _vy(y), _vz(z), _vw(1.0f)
	{}

	//4 argument constructor
	Vect::Vect(const float& x, const float& y, const float& z, const float& w) :
		_vx(x), _vy(y), _vz(z), _vw(w)
	{}

	//assignment operator
	const Vect& Vect::operator=(const Vect& v) {
		this->_vx = v._vx;
		this->_vy = v._vy;
		this->_vz = v._vz;
		this->_vw = v._vw;
		return *this;
	}

	//destructor
	Vect::~Vect() {}


	//add operator
	Vect Vect::operator+(const Vect& v) {
		return Vect(this->_vx + v._vx, this->_vy + v._vy, this->_vz + v._vz, 1.0f);
	}

	//subtract operator
	Vect Vect::operator-(const Vect& v) {
		return Vect(this->_vx - v._vx, this->_vy - v._vy, this->_vz - v._vz, 1.0f);
	}

	//add-equal operator
	Vect Vect::operator+=(const Vect& v) {
		this->_vx += v._vx;
		this->_vy += v._vy;
		this->_vz += v._vz;
		this->_vw = 1.0f;
		return *this;
	}

	//subtract-equal operator
	Vect Vect::operator-=(const Vect& v) {
		this->_vx -= v._vx;
		this->_vy -= v._vy;
		this->_vz -= v._vz;
		this->_vw = 1.0f;
		return *this;
	}

	//plus unary operator
	Vect Vect::operator+() {
		return Vect(this->_vx, this->_vy, this->_vz, 1.0f);
	}

	//minus unary operator
	Vect  Vect::operator-() {
		return Vect(-this->_vx, -this->_vy, -this->_vz, 1.0f);
	}

	//scale operator that takes float as parameter
	Vect Vect::operator*(const float& t) {
		return Vect(this->_vx * t, this->_vy * t, this->_vz * t);
	}

	//scale equal operator
	Vect Vect::operator*=(const float& t) {
		this->_vx *= t;
		this->_vy *= t;
		this->_vz *= t;
		this->_vw = 1.0f;
		return *this;
	}


	//dot product
	float Vect::dot(const Vect& v) {
		return this->_vx * v._vx + this->_vy * v._vy + this->_vz * v._vz;
	}

	//cross product
	const Vect Vect::cross(const Vect& v) const {
		return Vect(this->_vy * v._vz - this->_vz * v._vy, -(this->_vx * v._vz - this->_vz * v._vx), this->_vx * v._vy - this->_vy * v._vx);
	}

	//normalize
	const void Vect::norm() {
		float denominator = sqrtf(this->_vx * this->_vx + this->_vy * this->_vy + this->_vz * this->_vz);
		this->_vx /= denominator;
		this->_vy /= denominator;
		this->_vz /= denominator;
		this->_vw = 1.0f;
	}

	//get normalize
	const Vect Vect::getNorm() const {
		float denominator = sqrtf(this->_vx * this->_vx + this->_vy * this->_vy + this->_vz * this->_vz);
		return Vect(this->_vx / denominator, this->_vy / denominator, this->_vz / denominator);
	}

	//magnitude
	const float Vect::mag() const {
		return sqrtf(this->_vx * this->_vx + this->_vy * this->_vy + this->_vz * this->_vz);
	}

	//magnitude square
	const float Vect::magSqr() const {
		return this->_vx * this->_vx + this->_vy * this->_vy + this->_vz * this->_vz;
	}

	//get angle
	float Vect::getAngle(const Vect& v) {
		return acosf(this->dot(v) / ((this->mag() * v.mag())));
	}

	//bracket operator
	float& Vect::operator[](const enum x_enum) {
		return this->_vx;
	}

	float& Vect::operator[](const enum y_enum) {
		return this->_vy;
	}

	float& Vect::operator[](const enum z_enum) {
		return this->_vz;
	}

	float& Vect::operator[](const enum w_enum) {
		return this->_vw;
	}

	//const bracket operator
	const float& Vect::operator[](const enum x_enum) const {
		return this->_vx;
	}

	const float& Vect::operator[](const enum y_enum) const {
		return this->_vy;
	}

	const float& Vect::operator[](const enum z_enum) const {
		return this->_vz;
	}

	const float& Vect::operator[](const enum w_enum) const {
		return this->_vw;
	}

	//get method
	float& Vect::x() {
		return this->_vx;
	}
	float& Vect::y() {
		return this->_vy;
	}
	float& Vect::z() {
		return this->_vz;
	}
	float& Vect::w() {
		return this->_vw;
	}

	//const get method
	const float& Vect::x() const {
		return this->_vx;
	}
	const float& Vect::y() const {
		return this->_vy;
	}
	const float& Vect::z() const {
		return this->_vz;
	}
	const float& Vect::w() const {
		return this->_vw;
	}

	//set method
	void Vect::set(const Vect& v) {
		this->_vx = v._vx;
		this->_vy = v._vy;
		this->_vz = v._vz;
		this->_vw = v._vw;
	}

	void Vect::set(const float& x, const float& y, const float& z) {
		this->_vx = x;
		this->_vy = y;
		this->_vz = z;
		this->_vw = 1.0f;
	}

	void Vect::set(const float& x, const float& y, const float& z, const float& w) {
		this->_vx = x;
		this->_vy = y;
		this->_vz = z;
		this->_vw = w;
	}

	//equal method takes 2 arguments
	bool Vect::isEqual(const Vect& v, const float& t) const {
		return Util::isEqual(this->_vx, v._vx, t) && Util::isEqual(this->_vy, v._vy, t) && Util::isEqual(this->_vz, v._vz, t);
	}

	//equal method takes 1 argument
	bool Vect::isEqual(const Vect& v) const {
		return (this->_vx == v._vx) && (this->_vy == v._vy) && (this->_vz == v._vz);
	}

	//zero method takes 1 argument
	bool Vect::isZero(const float& t) {
		return Util::isZero(this->_vx, t) && Util::isZero(this->_vy, t) && Util::isZero(this->_vz, t);
	}

	//zero methods takes no argument
	bool Vect::isZero() {
		return (this->_vx == 0.0f) && (this->_vy == 0.0f) && (this->_vz == 0.0f) && (this->_vw == 1.0f);
	}

}

// ---  End of File ---------------
