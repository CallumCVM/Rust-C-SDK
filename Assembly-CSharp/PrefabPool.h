#pragma once

#include "..\System\Collections\Generic\Stack<PrefabInfo>.h"

namespace rust 
{
	class PrefabPool : public Object // 0x0
	{
	public:
		System::Collections::Generic::Stack<PrefabInfo> stack; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
