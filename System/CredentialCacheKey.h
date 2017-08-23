#pragma once

#include "..\System\Uri.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CredentialCacheKey : public Object // 0x0
	{
	public:
		System::Uri* uriPrefix; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* authType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* absPath; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int len; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int hash; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
