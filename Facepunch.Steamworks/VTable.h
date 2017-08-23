#pragma once

namespace rust 
{
	class VTable : public Object // 0x0
	{
	public:
		__int64 ResultA; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 ResultB; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 GetSize; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x28
}
