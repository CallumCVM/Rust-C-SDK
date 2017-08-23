#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class Segment : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 point; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		float length; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
