#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\IAuthenticationModule.h"

namespace System
{
	namespace Net
{
	class Authorization : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* token; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* connectionGroupId; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** protectionRealm; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::IAuthenticationModule* module; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool complete; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
