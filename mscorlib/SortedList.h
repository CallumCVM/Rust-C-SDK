#pragma once

#include "..\System\Collections\SortedList\Slot.h"
#include "..\System\Collections\IComparer.h"

namespace System
{
	namespace Collections
{
	class SortedList : public Object // 0x0
	{
	public:
		int inUse; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int modificationCount; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::SortedList::Slot* table; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::IComparer* comparer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int defaultCapacity; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
