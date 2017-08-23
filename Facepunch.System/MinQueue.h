#pragma once

namespace rust 
{
	class MinQueue : public Object // 0x0
	{
	public:
		Deque<int> data; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Deque<int> min; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
