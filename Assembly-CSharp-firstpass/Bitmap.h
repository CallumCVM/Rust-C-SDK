#pragma once

namespace rust 
{
	class Bitmap : public ValueType // 0x0
	{
	public:
		__int64 data; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x18
}
