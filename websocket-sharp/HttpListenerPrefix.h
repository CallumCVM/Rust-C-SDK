#pragma once

#include "..\System\Net\IPAddress.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Net\HttpListener.h"
#include "..\System\UInt16.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerPrefix : public Object // 0x0
	{
	public:
		System::Net::IPAddress* _addresses; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _host; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::HttpListener* _listener; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _original; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _path; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::UInt16 _port; // 0x38 (size: 0x2, flags: 0x1, type: 0x7)
		bool _secure; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
