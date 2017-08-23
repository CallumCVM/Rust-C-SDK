#pragma once

#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\WebSocketSharp\WebSocket.h"

namespace WebSocketSharp
{
	namespace Net
{
{
		namespace WebSockets
{
	class HttpListenerWebSocketContext : public WebSocketContext // 0x0
	{
	public:
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::WebSocket* _websocket; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
