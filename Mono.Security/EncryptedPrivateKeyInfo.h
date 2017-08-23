#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class EncryptedPrivateKeyInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _algorithm; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _salt; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _data; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int _iterations; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
