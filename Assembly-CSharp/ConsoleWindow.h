#pragma once

#include "..\System\IO\TextWriter.h"

namespace Windows
{
	class ConsoleWindow : public Object // 0x0
	{
	public:
		System::IO::TextWriter* oldOutput; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
