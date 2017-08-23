#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Object.h"

namespace rust 
{
	class SimpleEnumerator : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int version; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		System::Object currentElement; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x28
}
