//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_VECT_H
#define ENGINE_MATH_VECT_H

// Includes to handle SIMD register types
#include <xmmintrin.h>
#include <smmintrin.h> 

namespace Azul
{
	class Vect final : public Align16
	{
	public:

	        // Do your magic here
		//default constructor
		Vect();

		//copy constructor
		Vect(const Vect& v);

		//3 arguments constructor
		Vect(const float& x, const float& y, const float& z);

		//4 arguments constructor
		Vect(const float& x, const float& y, const float& z, const float& w);

		//assignment operator
		const Vect& operator=(const Vect& v);

		//destructor
		~Vect();

		//add operator
		Vect operator+(const Vect& v);
		//subtract operator
		Vect operator-(const Vect& v);
		//add-equal operator
		Vect operator+=(const Vect& v);
		//subtract-equal operator
		Vect operator-=(const Vect& v);
		//plus unary operator
		Vect operator+();
		//minus unary operator
		Vect operator-();
		//scale that has float as parameter
		Vect operator*(const float& t);
		//scale equal 
		Vect operator*=(const float& t);

		friend Vect operator*(const float& t, const Vect& v);

		//dot product
		float dot(const Vect& v);
		//cross product
		const Vect cross(const Vect& v) const;
		//normalized
		const void norm();
		//get normalized
		const Vect getNorm() const;
		//magnitude
		const float mag() const;
		//magnitude square
		const float magSqr() const;
		//angle
		float getAngle(const Vect& v);

		//bracket operator
		float& operator[](const enum x_enum);
		float& operator[](const enum y_enum);
		float& operator[](const enum z_enum);
		float& operator[](const enum w_enum);

		//const bracket operator
		const float& operator[](const enum x_enum) const;
		const float& operator[](const enum y_enum) const;
		const float& operator[](const enum z_enum) const;
		const float& operator[](const enum w_enum) const;

		//get method
		float& x();
		float& y();
		float& z();
		float& w();

		//const get method
		const float& x() const;
		const float& y() const;
		const float& z() const;
		const float& w() const;

		//set method
		void set(const Vect& v);
		void set(const float& x, const float& y, const float& z);
		void set(const float& x, const float& y, const float& z, const float& w);

		//equal method takes 2 arguments
		bool isEqual(const Vect& v, const float& t) const;

		//equal methos takes 1 argument
		bool isEqual(const Vect& v) const;


		//zero method takes 1 argument
		bool isZero(const float& t);

		//zero method takes no argument
		bool isZero();

	private:

		union
		{
			__m128	_mv;

			// anonymous struct
			struct
			{
				float _vx;
				float _vy;
				float _vz;
				float _vw;
			};
		};
	};

	inline Vect operator*(const float& t, const Vect& v) {
		return Vect(t * v._vx, t * v._vy, t * v._vz);
	}


}

#endif

// ---  End of File ---------------
