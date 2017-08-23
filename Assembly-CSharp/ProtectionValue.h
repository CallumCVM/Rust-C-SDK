#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\Rust\DamageType.h"

namespace rust 
{
	class ProtectionValue : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::DamageType damageType; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		bool selectedItem; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
