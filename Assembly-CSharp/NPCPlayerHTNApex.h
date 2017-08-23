#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class NPCPlayerHTNApex : public NPCPlayer // 0x4e8
	{
	public:
		GameObjectRef* RadioEffect; // 0x4e8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* DeathEffect; // 0x4f0 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x4f8
}
