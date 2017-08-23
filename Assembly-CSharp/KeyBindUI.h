#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class KeyBindUI : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* blockingCanvas; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* btnA; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* btnB; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* bindString; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UI::Button* binding; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool noButtonsDown; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
