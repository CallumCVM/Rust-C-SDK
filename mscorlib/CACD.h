#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class CACD : public Object // 0x0
	{
	public:
		System::Object d; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object c; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
	}; // size = 0x20
}
