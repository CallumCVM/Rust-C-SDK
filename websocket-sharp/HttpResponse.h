#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	class HttpResponse : public HttpBase // 0x28
	{
	public:
		UnityEngine::UnicodeString* _code; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _reason; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
