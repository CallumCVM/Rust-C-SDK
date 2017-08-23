#pragma once

#include "..\System\UInt16.h"

namespace System
{
	class UInt16 : public ValueType // 0x0
	{
	public:
		System::UInt16 m_value; // 0x10 (size: 0x2, flags: 0x3, type: 0x7)
	}; // size = 0x18
}
