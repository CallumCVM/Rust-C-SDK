#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class LockedByEntCrate : public LootContainer // 0x318
	{
	public:
		UnityEngine::GameObject* lockingEnt; // 0x318 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x320
}
