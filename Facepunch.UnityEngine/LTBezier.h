#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class LTBezier : public Object // 0x0
	{
	public:
		float* arcLengths; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		float length; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 a; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 aa; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 bb; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 cc; // 0x40 (size: 0xc, flags: 0x1, type: 0x11)
		float len; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x50
}
