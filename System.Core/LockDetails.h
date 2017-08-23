#pragma once

namespace rust 
{
	class LockDetails : public Object // 0x0
	{
	public:
		int ThreadId; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int ReadLocks; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
