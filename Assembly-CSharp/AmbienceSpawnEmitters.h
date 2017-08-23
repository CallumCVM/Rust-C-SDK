#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class AmbienceSpawnEmitters : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* emitterPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int baseEmitterCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int baseEmitterDistance; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
