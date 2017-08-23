#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class Bootstrap : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UnicodeString* messageString; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* errorPanel; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* errorText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* statusText; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
