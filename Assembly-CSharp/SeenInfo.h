#pragma once

#include "BaseEntity.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class SeenInfo : public ValueType // 0x0
	{
	public:
		BaseEntity* Entity; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 Position; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		float Timestamp; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float Danger; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
