#pragma once

#include "..\System\Diagnostics\Stopwatch.h"
#include "..\System\Collections\IEnumerator.h"

namespace rust 
{
	class RecycledLongRunningAction : public Object // 0x0
	{
	public:
		System::Diagnostics::Stopwatch* _watch; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::IEnumerator* _iter; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int _maxMillisecondsUsedPerFrame; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool <repeat>k__BackingField; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
