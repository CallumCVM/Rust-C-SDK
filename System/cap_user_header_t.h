#pragma once

namespace rust 
{
	class cap_user_header_t : public ValueType // 0x0
	{
	public:
		unsigned int version; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		int pid; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
