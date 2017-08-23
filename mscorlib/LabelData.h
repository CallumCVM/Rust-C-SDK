#pragma once

namespace rust 
{
	class LabelData : public ValueType // 0x0
	{
	public:
		int addr; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int maxStack; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
