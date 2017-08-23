#pragma once

#include "..\System\Char.h"

namespace System
{
	class String : public Object // 0x0
	{
	public:
		int length; // 0x10 (size: 0x4, flags: 0x81, type: 0x8)
		System::Char start_char; // 0x14 (size: 0x2, flags: 0x81, type: 0x3)
	}; // size = 0x18
}
