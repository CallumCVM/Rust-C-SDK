#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ChainValidationHelper : public Object // 0x0
	{
	public:
		System::Object sender; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* host; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
