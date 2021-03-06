#pragma once

namespace System
{
	namespace Threading
{
	class LockCookie : public ValueType // 0x0
	{
	public:
		int ThreadId; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		int ReaderLocks; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
		int WriterLocks; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x20
}
