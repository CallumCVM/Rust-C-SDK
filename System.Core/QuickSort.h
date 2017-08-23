#pragma once

#include "TElement.h"
#include "..\System\Linq\SortContext<TElement>.h"

namespace System
{
	namespace Linq
{
		template <typename T0>
	class QuickSort : public Object // 0x0
	{
	public:
		TElement* elements; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int* indexes; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Linq::SortContext<TElement> context; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
