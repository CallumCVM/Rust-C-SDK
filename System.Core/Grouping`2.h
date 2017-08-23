#pragma once

#include "K.h"
#include "..\System\Collections\Generic\IEnumerable<T>.h"

namespace System
{
	namespace Linq
{
		template <typename T0, typename T1>
	class Grouping`2 : public Object // 0x0
	{
	public:
		K key; // 0x10 (size: 0x8, flags: 0x1, type: 0x13)
		System::Collections::Generic::IEnumerable<T> group; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
