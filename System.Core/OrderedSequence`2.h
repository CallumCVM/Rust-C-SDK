#pragma once

#include "..\System\Linq\OrderedEnumerable<TElement>.h"
#include "..\System\Func<TElement,TKey>.h"
#include "..\System\Collections\Generic\IComparer<TKey>.h"
#include "..\System\Linq\SortDirection.h"

namespace System
{
	namespace Linq
{
		template <typename T0, typename T1>
	class OrderedSequence`2 : public OrderedEnumerable`1 // 0x18
	{
	public:
		System::Linq::OrderedEnumerable<TElement> parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Func<TElement,TKey> selector; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IComparer<TKey> comparer; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Linq::SortDirection direction; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
