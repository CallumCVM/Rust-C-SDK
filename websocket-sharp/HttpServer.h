#pragma once

#include "..\System\Net\IPAddress.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Net\HttpListener.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\System\Threading\Thread.h"
#include "..\WebSocketSharp\Server\WebSocketServiceManager.h"
#include "..\WebSocketSharp\Server\ServerState.h"
#include "..\System\Object.h"
#include "..\System\EventHandler<WebSocketSharp\Server\HttpRequestEventArgs>.h"

namespace WebSocketSharp
{
	namespace Server
{
	class HttpServer : public Object // 0x0
	{
	public:
		System::Net::IPAddress* _address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _hostname; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::HttpListener* _listener; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Logger* _logger; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Thread* _receiveThread; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _rootPath; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Server::WebSocketServiceManager* _services; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _sync; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnConnect; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnDelete; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnGet; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnHead; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnOptions; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnPatch; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnPost; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnPut; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::Server::HttpRequestEventArgs> OnTrace; // 0x90 (size: 0x8, flags: 0x1, type: 0x15)
		int _port; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		bool _secure; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Server::ServerState _state; // 0xa0 (size: 0x4, flags: 0x1, type: 0x11)
		bool _windows; // 0xa4 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
