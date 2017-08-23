#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Version.h"

namespace System
{
	class ApplicationId : public Object // 0x0
	{
	public:
		unsigned char* _token; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* _version; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _proc; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _culture; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
