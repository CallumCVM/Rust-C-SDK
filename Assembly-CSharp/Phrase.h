#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Phrase : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* token; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* english; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
