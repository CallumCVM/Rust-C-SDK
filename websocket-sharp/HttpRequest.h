#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	class HttpRequest : public HttpBase // 0x28
	{
	public:
		UnityEngine::UnicodeString* _method; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _uri; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool _websocketRequest; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool _websocketRequestSet; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
