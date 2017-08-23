#pragma once

#include "..\System\Uri.h"

namespace rust 
{
	class SPKey : public Object // 0x0
	{
	public:
		System::Uri* uri; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool use_connect; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
