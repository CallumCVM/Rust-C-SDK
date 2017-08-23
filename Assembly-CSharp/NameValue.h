#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Color.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class NameValue : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* value; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		Translate::Phrase* label; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color imageColor; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
