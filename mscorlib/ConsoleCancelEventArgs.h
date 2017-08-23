#pragma once

#include "..\System\ConsoleSpecialKey.h"

namespace System
{
	class ConsoleCancelEventArgs : public EventArgs // 0x0
	{
	public:
		bool cancel; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::ConsoleSpecialKey specialKey; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
