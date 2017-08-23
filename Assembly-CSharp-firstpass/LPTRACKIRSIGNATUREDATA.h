#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class LPTRACKIRSIGNATUREDATA : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* DllSignature; // 0x10 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* AppSignature; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x20
}
