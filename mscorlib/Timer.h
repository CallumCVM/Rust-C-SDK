#pragma once

#include "..\System\Threading\TimerCallback.h"
#include "..\System\Object.h"

namespace System
{
	namespace Threading
{
	class Timer : public MarshalByRefObject // 0x18
	{
	public:
		System::Threading::TimerCallback* callback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object state; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 due_time_ms; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 period_ms; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 next_run; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
		bool disposed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
