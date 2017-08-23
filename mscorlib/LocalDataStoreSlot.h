#pragma once

namespace System
{
	class LocalDataStoreSlot : public Object // 0x0
	{
	public:
		int slot; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		bool thread_local; // 0x14 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x18
}
