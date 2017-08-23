#pragma once

#include "..\System\Linq\SortDirection.h"
#include "..\System\Linq\SortContext<TElement>.h"

namespace System
{
	namespace Linq
{
		template <typename T0>
	class SortContext : public Object // 0x0
	{
	public:
		System::Linq::SortContext<TElement> child_context; // 0x10 (size: 0x8, flags: 0x4, type: 0x15)
		System::Linq::SortDirection direction; // 0x18 (size: 0x4, flags: 0x4, type: 0x11)
	}; // size = 0x20
}
