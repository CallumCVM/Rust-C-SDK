#pragma once

#include "..\System\Collections\Generic\HashSet<T>.h"
#include "..\System\Collections\Generic\Queue<T>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class QueueOnce : public Object // 0x0
	{
	public:
		System::Collections::Generic::HashSet<T> _set; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Queue<T> _q; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
