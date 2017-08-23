#pragma once

namespace System
{
	class Boolean : public ValueType // 0x0
	{
	public:
		bool m_value; // 0x10 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x18
}
