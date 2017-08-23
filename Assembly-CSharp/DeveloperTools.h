#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class DeveloperTools : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* developerTools; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* navButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* panelContainer; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* networkGraph; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
