#pragma once

#include "..\WebSocketSharp\Net\HttpListenerRequest.h"
#include "..\WebSocketSharp\Net\HttpListenerResponse.h"

namespace WebSocketSharp
{
	namespace Server
{
	class HttpRequestEventArgs : public EventArgs // 0x0
	{
	public:
		WebSocketSharp::Net::HttpListenerRequest* _request; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerResponse* _response; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
