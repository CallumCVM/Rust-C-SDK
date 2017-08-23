#pragma once

#include "..\System\MonoListItem.h"
#include "..\System\Object.h"

namespace System
{
	class MonoListItem : public Object // 0x0
	{
	public:
		System::MonoListItem* next; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
