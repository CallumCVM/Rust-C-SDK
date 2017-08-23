#pragma once

#include "..\System\Net\IPAddress.h"
#include "..\WebSocketSharp\Net\AuthenticationSchemes.h"
#include "..\System\Func<System\Security\Principal\IIdentity,WebSocketSharp\Net\NetworkCredential>.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\Sockets\TcpListener.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\System\Threading\Thread.h"
#include "..\WebSocketSharp\Server\WebSocketServiceManager.h"
#include "..\WebSocketSharp\Net\ServerSslConfiguration.h"
#include "..\WebSocketSharp\Server\ServerState.h"
#include "..\System\Object.h"

namespace WebSocketSharp
{
	namespace Server
{
	class WebSocketServer : public Object // 0x0
	{
	public:
		System::Net::IPAddress* _address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Func<System::Security::Principal::IIdentity,WebSocketSharp::Net::NetworkCredential> _credFinder; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _hostname; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::Sockets::TcpListener* _listener; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Logger* _logger; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _realm; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Threading::Thread* _receiveThread; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Server::WebSocketServiceManager* _services; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::ServerSslConfiguration* _sslConfig; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _sync; // 0x58 (size: 0x8, flags: 0x1, type: 0x1c)
		WebSocketSharp::Net::AuthenticationSchemes _authSchemes; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
		bool _dnsStyle; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		int _port; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		bool _reuseAddress; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		bool _secure; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Server::ServerState _state; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
