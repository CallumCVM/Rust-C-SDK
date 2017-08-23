#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class Binocular : public AttackEntity // 0x1e0
	{
	public:
		float* fovs; // 0x1e0 (size: 0x8, flags: 0x6, type: 0x1d)
		GameObjectRef* fovChangeEffect; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x12)
		bool vmVisible; // 0x1f0 (size: 0x1, flags: 0x1, type: 0x2)
		bool isAiming; // 0x1f1 (size: 0x1, flags: 0x1, type: 0x2)
		float timeAiming; // 0x1f4 (size: 0x4, flags: 0x1, type: 0xc)
		int currentFovIndex; // 0x1f8 (size: 0x4, flags: 0x1, type: 0x8)
		float smoothSpeed; // 0x1fc (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x200
}
