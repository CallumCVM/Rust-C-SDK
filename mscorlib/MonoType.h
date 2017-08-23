#pragma once

#include "..\System\MonoTypeInfo.h"

namespace System
{
	class MonoType : public Type // 0x18
	{
	public:
		System::MonoTypeInfo* type_info; // 0x18 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x20
}
