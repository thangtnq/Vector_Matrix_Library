//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include <math.h>    // <--- ONLY location for <math.h> allowed
#include "Trig.h"

namespace Azul
{

	// Do your magic here
	float Trig::cos(const float& angle)
	{
		return cosf(angle);
	}

	float Trig::sin(const float& angle)
	{
		return sinf(angle);
	}

	float Trig::tan(const float& angle)
	{
		return tanf(angle);
	}

	float Trig::acos(const float& angle)
	{
		return acosf(angle);
	}

	float Trig::asin(const float& angle)
	{
		return asinf(angle);
	}

	float Trig::atan(const float& angle)
	{
		return atanf(angle);
	}

	float Trig::atan2(const float& angle1, const float& angle2)
	{
		return atanf(angle1) - atanf(angle2);
	}

	float Trig::sqrt(const float& inNumber)
	{
		return sqrtf(inNumber);
	}

	float Trig::rsqrt(const float& inNumber) 
	{
		return sqrtf(1 / inNumber);
	}

	const void Trig::cossin(float& returnSin, float& returnCos, const float& angle)
	{
		returnSin = cosf(angle);
		returnCos = sinf(angle);
	}
}

// ---  End of File ---------------
