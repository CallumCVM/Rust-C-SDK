#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Button.h"

namespace rust 
{
	class ItemListTools : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* categoryButton; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* lastCategory; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
