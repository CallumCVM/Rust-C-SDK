#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class Identities : public ValueType // 0x0
	{
	public:
		System::Object Application; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object Assembly; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object Domain; // 0x20 (size: 0x8, flags: 0x6, type: 0x1c)
	}; // size = 0x28
}
