#pragma once

#include "..\WebSocketSharp\Net\HttpConnection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Net\HttpListener.h"
#include "..\WebSocketSharp\Net\HttpListenerRequest.h"
#include "..\WebSocketSharp\Net\HttpListenerResponse.h"
#include "..\System\Security\Principal\IPrincipal.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerContext : public Object // 0x0
	{
	public:
		WebSocketSharp::Net::HttpConnection* _connection; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _error; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::HttpListener* _listener; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerRequest* _request; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerResponse* _response; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Principal::IPrincipal* _user; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int _errorStatus; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
