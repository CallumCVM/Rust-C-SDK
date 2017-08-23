#pragma once

#include "..\System\RuntimeTypeHandle.h"

namespace System
{
	class TypedReference : public ValueType // 0x0
	{
	public:
		System::RuntimeTypeHandle type; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		__int64 value; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 klass; // 0x20 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x28
}
