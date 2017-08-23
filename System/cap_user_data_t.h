#pragma once

namespace rust 
{
	class cap_user_data_t : public ValueType // 0x0
	{
	public:
		unsigned int effective; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int permitted; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int inheritable; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
