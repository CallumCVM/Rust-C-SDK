#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class UIInventory : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::Text* PlayerName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Inset; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float returnX; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
