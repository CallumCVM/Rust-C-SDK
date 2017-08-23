#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Uri.h"

namespace System
{
	class UriBuilder : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* scheme; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* host; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* query; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fragment; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* username; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* password; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* uri; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int port; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool modified; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
