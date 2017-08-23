#pragma once

#include "..\WebSocketSharp\Net\WebSockets\WebSocketContext.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Server\WebSocketSessionManager.h"
#include "..\System\DateTime.h"
#include "..\WebSocketSharp\WebSocket.h"

namespace WebSocketSharp
{
	namespace Server
{
	class WebSocketBehavior : public Object // 0x0
	{
	public:
		WebSocketSharp::Net::WebSockets::WebSocketContext* _context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System.Func<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,bool> _cookiesValidator; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _id; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System.Func<UnityEngine::UnicodeString*,bool> _originValidator; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _protocol; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Server::WebSocketSessionManager* _sessions; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::WebSocket* _websocket; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool _emitOnPing; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool _ignoreExtensions; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime _startTime; // 0x50 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
