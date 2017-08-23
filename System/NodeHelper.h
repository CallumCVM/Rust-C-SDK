#pragma once

#include "..\System\Collections\Generic\IComparer<TKey>.h"

namespace rust 
{
	class NodeHelper : public Object // 0x0
	{
	public:
		System::Collections::Generic::IComparer<TKey> cmp; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
