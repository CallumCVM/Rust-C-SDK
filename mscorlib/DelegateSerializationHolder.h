#pragma once

#include "..\System\Delegate.h"

namespace System
{
	class DelegateSerializationHolder : public Object // 0x0
	{
	public:
		System::Delegate* _delegate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
