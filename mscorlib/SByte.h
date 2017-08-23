#pragma once

#include "..\System\SByte.h"

namespace System
{
	class SByte : public ValueType // 0x0
	{
	public:
		System::SByte m_value; // 0x10 (size: 0x1, flags: 0x3, type: 0x4)
	}; // size = 0x18
}
