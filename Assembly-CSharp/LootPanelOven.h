#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class LootPanelOven : public LootPanel // 0x20
	{
	public:
		UnityEngine::GameObject* controlsOn; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* controlsOff; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
