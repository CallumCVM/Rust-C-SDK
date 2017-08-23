#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class Line : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 point0; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 point1; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
