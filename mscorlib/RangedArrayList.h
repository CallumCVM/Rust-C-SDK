#pragma once

namespace rust 
{
	class RangedArrayList : public ArrayListWrapper // 0x30
	{
	public:
		int m_InnerIndex; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InnerCount; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InnerStateChanges; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
