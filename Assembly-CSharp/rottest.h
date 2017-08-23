#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class rottest : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* turretBase; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 aimDir; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
