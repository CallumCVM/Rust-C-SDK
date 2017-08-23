#pragma once

#include "..\System\Runtime\InteropServices\GCHandle.h"

namespace System
{
	class WeakReference : public Object // 0x0
	{
	public:
		bool isLongReference; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::InteropServices::GCHandle gcHandle; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
