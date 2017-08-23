#pragma once

#include "..\System\Collections\Generic\IEnumerable<TElement>.h"

namespace System
{
	namespace Linq
{
		template <typename T0>
	class OrderedEnumerable : public Object // 0x0
	{
	public:
		System::Collections::Generic::IEnumerable<TElement> source; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
