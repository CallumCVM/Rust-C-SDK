#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\MonoBehaviour.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class ConvarEvent : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* convar; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* on; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::MonoBehaviour* component; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ConsoleSystem::Command* cmd; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
