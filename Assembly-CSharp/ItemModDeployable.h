#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ItemModDeployable : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* entityPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* UnlockAchievement; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool showCrosshair; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
