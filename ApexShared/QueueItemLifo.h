#pragma once

#include "T.h"

namespace rust 
{
	class QueueItemLifo : public ValueType // 0x0
	{
	public:
		T _item; // 0x10 (size: 0x8, flags: 0x1, type: 0x13)
		int _priority; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _entryOrder; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
