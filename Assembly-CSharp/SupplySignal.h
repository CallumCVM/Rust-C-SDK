#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class SupplySignal : public TimedExplosive // 0x168
	{
	public:
		GameObjectRef* smokeEffectPrefab; // 0x168 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* EntityToCreate; // 0x170 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* smokeEffect; // 0x178 (size: 0x8, flags: 0x86, type: 0x12)
	}; // size = 0x180
}
