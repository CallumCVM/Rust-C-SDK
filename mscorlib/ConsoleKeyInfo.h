#pragma once

#include "..\System\ConsoleKey.h"
#include "..\System\Char.h"
#include "..\System\ConsoleModifiers.h"

namespace System
{
	class ConsoleKeyInfo : public ValueType // 0x0
	{
	public:
		System::ConsoleKey key; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Char keychar; // 0x14 (size: 0x2, flags: 0x1, type: 0x3)
		System::ConsoleModifiers modifiers; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
