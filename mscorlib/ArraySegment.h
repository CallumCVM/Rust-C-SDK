#pragma once

#include "T.h"

namespace System
{
	template <typename T0>
	class ArraySegment : public ValueType // 0x0
	{
	public:
		T* array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int offset; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
