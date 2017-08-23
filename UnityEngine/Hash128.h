#pragma once

namespace UnityEngine
{
	class Hash128 : public ValueType // 0x0
	{
	public:
		unsigned int m_u32_0; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_u32_1; // 0x14 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_u32_2; // 0x18 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_u32_3; // 0x1c (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x20
}
