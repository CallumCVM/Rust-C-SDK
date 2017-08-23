#pragma once

namespace rust 
{
	class ExtendGBufferParams : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x18
}
