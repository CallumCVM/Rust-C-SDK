#pragma once

namespace rust 
{
	class Filter : public List`1 // 0x20
	{
	public:
		__int64 NativeArray; // 0x20 (size: 0x8, flags: 0x3, type: 0x18)
		__int64 m_pArrayEntries; // 0x28 (size: 0x8, flags: 0x1, type: 0x18)
		int AppId; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
