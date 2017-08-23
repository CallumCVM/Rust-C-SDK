#pragma once

#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class AttrListImpl : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* attrNames; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* attrValues; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
