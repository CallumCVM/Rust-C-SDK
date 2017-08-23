#pragma once

#include "..\System\UInt16.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Steamworks
{
	class ServerInit : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* VersionString; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ModDir; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* GameDescription; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int IpAddress; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 SteamPort; // 0x2c (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 GamePort; // 0x2e (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 QueryPort; // 0x30 (size: 0x2, flags: 0x6, type: 0x7)
		bool Secure; // 0x32 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
