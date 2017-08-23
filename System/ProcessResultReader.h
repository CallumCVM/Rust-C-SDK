#pragma once

#include "..\System\IO\StreamReader.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ProcessResultReader : public Object // 0x0
	{
	public:
		System::IO::StreamReader* reader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* file; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
