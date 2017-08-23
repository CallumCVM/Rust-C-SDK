#pragma once

#include "..\UnityEngine\Vector3.h"
#include "LTBezier.h"

namespace rust 
{
	class LTBezierPath : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* pts; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		LTBezier* beziers; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		float* lengthRatio; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		float length; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		bool orientToPath; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		bool orientToPath2d; // 0x2d (size: 0x1, flags: 0x6, type: 0x2)
		int currentBezier; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int previousBezier; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
