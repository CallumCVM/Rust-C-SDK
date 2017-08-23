#pragma once

#include "..\System\Linq\IGrouping<TKey,TElement>.h"
#include "..\System\Collections\Generic\Dictionary<TKey,System\Linq\IGrouping<TKey,TElement>>.h"

namespace System
{
	namespace Linq
{
		template <typename T0, typename T1>
	class Lookup`2 : public Object // 0x0
	{
	public:
		System::Linq::IGrouping<TKey,TElement> nullGrouping; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Dictionary<TKey,System::Linq::IGrouping<TKey,TElement>> groups; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
