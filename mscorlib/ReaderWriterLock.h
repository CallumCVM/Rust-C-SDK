#pragma once

#include "..\System\Threading\LockQueue.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Threading
{
	class ReaderWriterLock : public CriticalFinalizerObject // 0x0
	{
	public:
		int seq_num; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int state; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int readers; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		System::Threading::LockQueue* writer_queue; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* reader_locks; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int writer_lock_owner; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
