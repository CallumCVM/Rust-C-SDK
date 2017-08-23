#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class ExplosionPlatformActivator : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Effect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float TimeDelay; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float DefaultRepeatTime; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float NearRepeatTime; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float currentTime; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float currentRepeatTime; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		bool canUpdate; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
