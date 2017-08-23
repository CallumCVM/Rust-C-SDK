#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class Input : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 position; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		float radius; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		int sampleCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float smoothingSpeed; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
