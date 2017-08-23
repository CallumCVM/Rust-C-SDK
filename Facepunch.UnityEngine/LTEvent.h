#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class LTEvent : public Object // 0x0
	{
	public:
		System::Object data; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		int id; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
