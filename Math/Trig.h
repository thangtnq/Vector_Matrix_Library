//-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_TRIG_H
#define ENGINE_MATH_TRIG_H

namespace Azul
{
	class Trig
	{
	public:
		
		// Do your magic here
		static float cos(const float& angle);
		static float sin(const float& angle);
		static float tan(const float& angle);
		static float acos(const float& angle);
		static float asin(const float& angle);
		static float atan(const float& angle);
		
		static float sqrt(const float& inNumber);
		static float rsqrt(const float& inNumber);
		const static void cossin(float& returnSin, float& returnCos, const float& angle);
		static float atan2(const float& angle1, const float& angle2);
	};
}

#endif

// ---  End of File ---------------
