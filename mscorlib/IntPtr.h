#pragma once

#include "..\System\Void*.h"

namespace System
{
	class IntPtr : public ValueType // 0x0
	{
	public:
		System::Void* m_value; // 0x10 (size: 0x8, flags: 0x1, type: 0xf)
	}; // size = 0x18
}
