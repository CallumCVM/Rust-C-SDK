#pragma once

#include "..\System\Collections\Generic\Queue<DeferredAction>.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class LoadBalancer : public SingletonComponent`1 // 0x18
	{
	public:
		System::Collections::Generic::Queue<DeferredAction>* queues; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Diagnostics::Stopwatch* watch; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
