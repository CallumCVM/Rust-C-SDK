#pragma once

#include "..\System\Collections\Queue.h"

namespace rust 
{
	class QueueEnumerator : public Object // 0x0
	{
	public:
		System::Collections::Queue* queue; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _version; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int current; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
