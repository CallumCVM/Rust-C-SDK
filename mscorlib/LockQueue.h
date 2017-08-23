#pragma once

#include "..\System\Threading\ReaderWriterLock.h"

namespace System
{
	namespace Threading
{
	class LockQueue : public Object // 0x0
	{
	public:
		System::Threading::ReaderWriterLock* rwlock; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int lockCount; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
