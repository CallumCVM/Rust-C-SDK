#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class AverageVelocity : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 pos; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		float time; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float lastEntry; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		float averageSpeed; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 averageVelocity; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
