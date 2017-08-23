#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class WildlifeTrap : public StorageContainer // 0x2e8
	{
	public:
		GameObjectRef* trappedEffect; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ItemDefinition>* ignoreBait; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<WildlifeTrap.WildlifeWeight>* targetWildlife; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x15)
		float tickRate; // 0x300 (size: 0x4, flags: 0x6, type: 0xc)
		float trappedEffectRepeatRate; // 0x304 (size: 0x4, flags: 0x6, type: 0xc)
		float trapSuccessRate; // 0x308 (size: 0x4, flags: 0x6, type: 0xc)
		float nextEffectTime; // 0x30c (size: 0x4, flags: 0x4, type: 0xc)
	}; // size = 0x310
}
