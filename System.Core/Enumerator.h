#pragma once

#include "..\System\Collections\Generic\HashSet<T>.h"
#include "T.h"

namespace rust 
{
	class Enumerator : public ValueType // 0x0
	{
	public:
		System::Collections::Generic::HashSet<T> hashset; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int next; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int stamp; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		T current; // 0x20 (size: 0x8, flags: 0x1, type: 0x13)
	}; // size = 0x28
}
