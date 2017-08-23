#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class MegaWirePointConstraint : public MegaWireConstraint // 0x20
	{
	public:
		UnityEngine::Transform* obj; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int p1; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3 offset; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 ps; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 tp; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
