#pragma once

#include "..\System\Collections\Generic\SortedList<TKey,TValue>.h"

namespace rust 
{
	class ValueEnumerator : public ValueType // 0x0
	{
	public:
		System::Collections::Generic::SortedList<TKey,TValue> l; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int idx; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int ver; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
