#pragma once

#include "T.h"

namespace rust 
{
template <typename T0>
	class ArrayReadOnlyList : public Object // 0x0
	{
	public:
		T* array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
