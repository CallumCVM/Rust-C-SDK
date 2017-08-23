#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Icon : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* icon; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x18
}
