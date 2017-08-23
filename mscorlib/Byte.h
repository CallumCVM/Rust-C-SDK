#pragma once

namespace System
{
	class Byte : public ValueType // 0x0
	{
	public:
		unsigned char m_value; // 0x10 (size: 0x1, flags: 0x3, type: 0x5)
	}; // size = 0x18
}
