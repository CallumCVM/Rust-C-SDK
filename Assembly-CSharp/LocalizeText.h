#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace rust 
{
	class LocalizeText : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* token; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* english; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* append; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		System::Object* Tokens; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		SpecialMode specialMode; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
