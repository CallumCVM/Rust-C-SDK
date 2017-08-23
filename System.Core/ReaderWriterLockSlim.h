#pragma once

#include "..\System\Threading\Thread.h"
#include "..\System\Threading\EventWaitHandle.h"
#include "..\System\Threading\LockRecursionPolicy.h"
#include "..\System\Threading\ReaderWriterLockSlim\LockDetails.h"

namespace System
{
	namespace Threading
{
	class ReaderWriterLockSlim : public Object // 0x0
	{
	public:
		System::Threading::Thread* upgradable_thread; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Thread* write_thread; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::EventWaitHandle* writeEvent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::EventWaitHandle* readEvent; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::EventWaitHandle* upgradeEvent; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ReaderWriterLockSlim::LockDetails* read_locks; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		int myLock; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int owners; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int numWriteWaiters; // 0x48 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int numReadWaiters; // 0x4c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int numUpgradeWaiters; // 0x50 (size: 0x4, flags: 0x1, type: 0x9)
		System::Threading::LockRecursionPolicy recursionPolicy; // 0x54 (size: 0x4, flags: 0x21, type: 0x11)
	}; // size = 0x58
}
