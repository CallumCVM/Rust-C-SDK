#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CredentialCacheForHostKey : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* host; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* authType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int port; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int hash; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
