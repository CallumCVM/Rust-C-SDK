#pragma once

namespace System
{
	class Int64 : public ValueType // 0x0
	{
	public:
		__int64 m_value; // 0x10 (size: 0x8, flags: 0x3, type: 0xa)
	}; // size = 0x18
}
