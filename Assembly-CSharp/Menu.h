#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Menu : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* TitleToken; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* TitleEnglish; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* UseVariable; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ProxyFunction; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* OnStart; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* OnProgress; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		int Order; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		float Time; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
