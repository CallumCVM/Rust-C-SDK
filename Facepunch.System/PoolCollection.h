#pragma once

#include "T.h"

namespace rust 
{
template <typename T0>
	class PoolCollection : public Object // 0x0
	{
	public:
		T* buffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		__int64 <ItemsInStack>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 <ItemsInUse>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 <ItemsCreated>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 <ItemsTaken>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 <ItemsSpilled>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x40
}
