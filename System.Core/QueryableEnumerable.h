#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Collections\Generic\IEnumerable<TElement>.h"

namespace System
{
	namespace Linq
{
		template <typename T0>
	class QueryableEnumerable : public Object // 0x0
	{
	public:
		System::Linq::Expressions::Expression* expression; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::IEnumerable<TElement> enumerable; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
