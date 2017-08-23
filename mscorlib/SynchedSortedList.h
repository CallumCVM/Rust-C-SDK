#pragma once

#include "..\System\Collections\SortedList.h"

namespace rust 
{
	class SynchedSortedList : public SortedList // 0x30
	{
	public:
		System::Collections::SortedList* host; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
