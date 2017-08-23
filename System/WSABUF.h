#pragma once

namespace rust 
{
	class WSABUF : public ValueType // 0x0
	{
	public:
		int len; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 buf; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x20
}
