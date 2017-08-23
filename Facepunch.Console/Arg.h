#pragma once

#include "..\ConsoleSystem\Option.h"
#include "..\ConsoleSystem\Command.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Arg : public Object // 0x0
	{
	public:
		ConsoleSystem::Option Option; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		ConsoleSystem::Command* cmd; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* FullString; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** Args; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* Reply; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		bool Invalid; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
