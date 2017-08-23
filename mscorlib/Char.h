#pragma once

#include "..\System\Char.h"

namespace System
{
	class Char : public ValueType // 0x0
	{
	public:
		System::Char m_value; // 0x10 (size: 0x2, flags: 0x3, type: 0x3)
	}; // size = 0x18
}
