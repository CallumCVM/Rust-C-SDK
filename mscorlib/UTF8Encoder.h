#pragma once

#include "..\System\Char.h"

namespace rust 
{
	class UTF8Encoder : public Encoder // 0x20
	{
	public:
		System::Char leftOverForCount; // 0x20 (size: 0x2, flags: 0x1, type: 0x3)
		System::Char leftOverForConv; // 0x22 (size: 0x2, flags: 0x1, type: 0x3)
	}; // size = 0x28
}
