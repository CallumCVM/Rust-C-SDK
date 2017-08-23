#pragma once

#include "..\System\AttributeTargets.h"

namespace System
{
	class AttributeUsageAttribute : public Attribute // 0x0
	{
	public:
		System::AttributeTargets valid_on; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		bool allow_multiple; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
		bool inherited; // 0x15 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
