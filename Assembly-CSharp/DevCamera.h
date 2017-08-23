#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DevCamera : public MonoBehaviour // 0x18
	{
	public:
		float movementScale; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 view; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 velocity; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		float zoom; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
