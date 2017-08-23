#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Net\HttpHeaderType.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpHeaderInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::HttpHeaderType _type; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
