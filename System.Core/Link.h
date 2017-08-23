#pragma once

namespace rust 
{
	class Link : public ValueType // 0x0
	{
	public:
		int HashCode; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int Next; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
