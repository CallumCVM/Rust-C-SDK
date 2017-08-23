#pragma once

#include "..\System\Func<TElement,TKey>.h"
#include "..\System\Collections\Generic\IComparer<TKey>.h"
#include "TKey.h"

namespace System
{
	namespace Linq
{
		template <typename T0, typename T1>
	class SortSequenceContext`2 : public SortContext`1 // 0x20
	{
	public:
		System::Func<TElement,TKey> selector; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IComparer<TKey> comparer; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		TKey* keys; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x38
}
