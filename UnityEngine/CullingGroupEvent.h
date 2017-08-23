#pragma once

namespace UnityEngine
{
	class CullingGroupEvent : public ValueType // 0x0
	{
	public:
		int m_Index; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char m_PrevState; // 0x14 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char m_ThisState; // 0x15 (size: 0x1, flags: 0x1, type: 0x5)
	}; // size = 0x18
}
