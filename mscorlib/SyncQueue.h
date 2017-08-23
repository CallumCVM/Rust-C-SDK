#pragma once

#include "..\System\Collections\Queue.h"

namespace rust 
{
	class SyncQueue : public Queue // 0x30
	{
	public:
		System::Collections::Queue* queue; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
