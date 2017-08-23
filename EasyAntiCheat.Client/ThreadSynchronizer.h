#pragma once

#include "..\System\Threading\Thread.h"
#include "..\System\Collections\Generic\Queue<System\Collections\Generic\KeyValuePair<System\Threading\WaitCallback,System\Object>>.h"
#include "..\System\Threading\Semaphore.h"
#include "..\System\Object.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class ThreadSynchronizer : public Object // 0x0
	{
	public:
		System::Threading::Thread* thread; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::Generic::Queue<System::Collections::Generic::KeyValuePair<System::Threading::WaitCallback,System::Object>> tasks; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		System::Threading::Semaphore* synchronizer; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		System::Object syncRoot; // 0x28 (size: 0x8, flags: 0x21, type: 0x1c)
		bool enabled; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
