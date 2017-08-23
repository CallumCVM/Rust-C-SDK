#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class MissingMemberException : public MemberAccessException // 0x60
	{
	public:
		UnityEngine::UnicodeString* ClassName; // 0x60 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* MemberName; // 0x68 (size: 0x8, flags: 0x4, type: 0xe)
		unsigned char* Signature; // 0x70 (size: 0x8, flags: 0x4, type: 0x1d)
	}; // size = 0x78
}
