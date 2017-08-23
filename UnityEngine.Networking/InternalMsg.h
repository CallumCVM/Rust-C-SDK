#pragma once

namespace rust 
{
	class InternalMsg : public ValueType // 0x0
	{
	public:
		unsigned char* buffer; // 0x10 (size: 0x8, flags: 0x3, type: 0x1d)
		int channelId; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x20
}
