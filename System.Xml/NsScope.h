#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class NsScope : public ValueType // 0x0
	{
	public:
		int DeclCount; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* DefaultNamespace; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
