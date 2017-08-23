#pragma once

#include "T.h"
#include "..\System\Collections\Generic\IComparer<T>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class SortedArray : public Object // 0x0
	{
	public:
		T* _items; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::IComparer<T> _sortComparer; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		int _capacity; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int _used; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
