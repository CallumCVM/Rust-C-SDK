#pragma once

namespace rust 
{
	class IntStack : public ValueType // 0x0
	{
	public:
		int* values; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
