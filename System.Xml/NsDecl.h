#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class NsDecl : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Uri; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
