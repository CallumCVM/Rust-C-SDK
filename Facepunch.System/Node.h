#pragma once

#include "..\System\Collections\Generic\HashSet<T>.h"

namespace rust 
{
template <typename T0>
	class Node : public Object // 0x0
	{
	public:
		System::Collections::Generic::HashSet<T> Contents; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
