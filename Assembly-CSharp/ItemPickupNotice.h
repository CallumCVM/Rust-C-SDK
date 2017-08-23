#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class ItemPickupNotice : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* objectDeleteOnFinish; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Amount; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
