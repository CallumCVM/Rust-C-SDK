#pragma once

#include "..\System\Int16.h"

namespace System
{
	class WindowsConsoleDriver : public Object // 0x0
	{
	public:
		__int64 inputHandle; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 outputHandle; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		System::Int16 defaultAttribute; // 0x20 (size: 0x2, flags: 0x1, type: 0x6)
	}; // size = 0x28
}
