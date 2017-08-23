#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Net\IPEndPoint.h"
#include "..\System\Collections\Generic\Dictionary<WebSocketSharp\Net\HttpListenerPrefix,WebSocketSharp\Net\HttpListener>.h"
#include "..\System\Net\Sockets\Socket.h"
#include "..\WebSocketSharp\Net\ServerSslConfiguration.h"
#include "..\System\Collections\Generic\Dictionary<WebSocketSharp\Net\HttpConnection,WebSocketSharp\Net\HttpConnection>.h"
#include "..\System\Object.h"

namespace WebSocketSharp
{
	namespace Net
{
	class EndPointListener : public Object // 0x0
	{
	public:
		UnityEngine::List<WebSocketSharp.Net.HttpListenerPrefix>* _all; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::IPEndPoint* _endpoint; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<WebSocketSharp::Net::HttpListenerPrefix,WebSocketSharp::Net::HttpListener> _prefixes; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::Sockets::Socket* _socket; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::ServerSslConfiguration* _sslConfig; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<WebSocketSharp.Net.HttpListenerPrefix>* _unhandled; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Dictionary<WebSocketSharp::Net::HttpConnection,WebSocketSharp::Net::HttpConnection> _unregistered; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _unregisteredSync; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _secure; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
