#pragma once

#include "..\System\Array.h"

namespace rust 
{
template <typename T0>
	class InternalEnumerator : public ValueType // 0x0
	{
	public:
		System::Array* array; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int idx; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
