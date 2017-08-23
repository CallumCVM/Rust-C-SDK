#pragma once

#include "..\System\Object.h"

namespace System
{
	class ArgumentOutOfRangeException : public ArgumentException // 0x68
	{
	public:
		System::Object actual_value; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x70
}
