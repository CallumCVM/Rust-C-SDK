#pragma once

#include "..\System\Uri.h"
#include "..\System\UriParser.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class UriData : public Object // 0x0
	{
	public:
		System::Uri* uri; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::UriParser* parser; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* absolute_path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* absolute_uri; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* absolute_uri_unescaped; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* authority; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fragment; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* host; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path_and_query; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* strong_port; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* query; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* user_info; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x70
}
