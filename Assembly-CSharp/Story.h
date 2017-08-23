#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class Story : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* url; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int date; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* text; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* author; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture* texture; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
