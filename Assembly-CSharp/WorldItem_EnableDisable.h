#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class WorldItem_EnableDisable : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::GameObject* objectToShowWhenEnabled; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* objectToShowWhenDisabled; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
