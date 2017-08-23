#pragma once

#include "..\System\Void*.h"

namespace System
{
	class UIntPtr : public ValueType // 0x0
	{
	public:
		System::Void* _pointer; // 0x10 (size: 0x8, flags: 0x1, type: 0xf)
	}; // size = 0x18
}
