#pragma once

#include "..\System\Int16.h"

namespace rust 
{
	class Burst : public ValueType // 0x0
	{
	public:
		float m_Time; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		System::Int16 m_MinCount; // 0x14 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 m_MaxCount; // 0x16 (size: 0x2, flags: 0x1, type: 0x6)
		int m_RepeatCount; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		float m_RepeatInterval; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
