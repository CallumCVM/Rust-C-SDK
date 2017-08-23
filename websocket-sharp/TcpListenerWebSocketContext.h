#pragma once

#include "..\WebSocketSharp\Net\CookieCollection.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\WebSocketSharp\HttpRequest.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\Sockets\TcpClient.h"
#include "..\System\Uri.h"
#include "..\System\Security\Principal\IPrincipal.h"
#include "..\WebSocketSharp\WebSocket.h"

namespace WebSocketSharp
{
	namespace Net
{
{
		namespace WebSockets
{
	class TcpListenerWebSocketContext : public WebSocketContext // 0x0
	{
	public:
		WebSocketSharp::Net::CookieCollection* _cookies; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Logger* _logger; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameValueCollection* _queryString; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::HttpRequest* _request; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _stream; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::TcpClient* _tcpClient; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* _uri; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Principal::IPrincipal* _user; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::WebSocket* _websocket; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool _secure; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
