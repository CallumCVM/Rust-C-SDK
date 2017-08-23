#pragma once

#include "ListDictionary<InstancingKey,InstancingBuffer>.h"

namespace rust 
{
	class InstancingContainer : public Object // 0x0
	{
	public:
		ListDictionary<InstancingKey,InstancingBuffer> buffers; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int capacity; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
