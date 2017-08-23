#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	namespace Net
{
	class NetworkCredential : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _domain; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _password; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** _roles; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _username; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
