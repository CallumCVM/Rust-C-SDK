#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class EffectMount : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::GameObject* effectPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* spawnedEffect; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* mountBone; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
