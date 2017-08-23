#pragma once

#include "..\System\RuntimeTypeHandle.h"

namespace System
{
	class Type : public MemberInfo // 0x0
	{
	public:
		System::RuntimeTypeHandle _impl; // 0x10 (size: 0x8, flags: 0x3, type: 0x11)
	}; // size = 0x18
}
