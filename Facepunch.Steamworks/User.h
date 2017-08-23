#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Steamworks
{
	class User : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> richPresence; // 0x18 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x20
}
