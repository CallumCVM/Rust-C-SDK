#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class ConvarToggleChildren : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* ConvarName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ConvarEnabled; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		ConsoleSystem::Command* Command; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool state; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
