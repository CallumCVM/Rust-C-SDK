#pragma once

#include "ListHashSet<UpdateBehaviour>.h"

namespace rust 
{
	class UpdateHandler : public SingletonComponent`1 // 0x18
	{
	public:
		ListHashSet<UpdateBehaviour> list; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
