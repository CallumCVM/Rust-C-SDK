#pragma once

#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class AttrListImpl : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* names; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::ArrayList* values; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
