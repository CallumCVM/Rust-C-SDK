#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class HTML_StartRequest_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* PchURL; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* PchTarget; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* PchPostData; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		bool BIsRedirect; // 0x30 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x38
}
