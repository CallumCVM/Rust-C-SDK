#pragma once

namespace rust 
{
	class Validation : public ValueType // 0x0
	{
	public:
		unsigned int entityUpdates; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
