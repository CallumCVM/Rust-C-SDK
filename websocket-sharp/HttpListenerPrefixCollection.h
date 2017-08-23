#pragma once

#include "..\WebSocketSharp\Net\HttpListener.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerPrefixCollection : public Object // 0x0
	{
	public:
		WebSocketSharp::Net::HttpListener* _listener; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine::UnicodeString*>* _prefixes; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
