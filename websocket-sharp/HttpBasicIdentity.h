#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpBasicIdentity : public GenericIdentity // 0x20
	{
	public:
		UnityEngine::UnicodeString* _password; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
