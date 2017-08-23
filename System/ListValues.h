#pragma once

#include "..\System\Collections\Generic\SortedList<TKey,TValue>.h"

namespace rust 
{
	class ListValues : public Object // 0x0
	{
	public:
		System::Collections::Generic::SortedList<TKey,TValue> host; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
