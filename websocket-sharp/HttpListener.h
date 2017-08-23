#pragma once

#include "..\WebSocketSharp\Net\AuthenticationSchemes.h"
#include "..\System\Func<WebSocketSharp\Net\HttpListenerRequest,WebSocketSharp\Net\AuthenticationSchemes>.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Generic\Dictionary<WebSocketSharp\Net\HttpConnection,WebSocketSharp\Net\HttpConnection>.h"
#include "..\System\Object.h"
#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Dictionary<WebSocketSharp\Net\HttpListenerContext,WebSocketSharp\Net\HttpListenerContext>.h"
#include "..\System\Func<System\Security\Principal\IIdentity,WebSocketSharp\Net\NetworkCredential>.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\WebSocketSharp\Net\HttpListenerPrefixCollection.h"
#include "..\WebSocketSharp\Net\ServerSslConfiguration.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListener : public Object // 0x0
	{
	public:
		System::Func<WebSocketSharp::Net::HttpListenerRequest,WebSocketSharp::Net::AuthenticationSchemes> _authSchemeSelector; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _certFolderPath; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Generic::Dictionary<WebSocketSharp::Net::HttpConnection,WebSocketSharp::Net::HttpConnection> _connections; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _connectionsSync; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::List<WebSocketSharp.Net.HttpListenerContext>* _ctxQueue; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _ctxQueueSync; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Collections::Generic::Dictionary<WebSocketSharp::Net::HttpListenerContext,WebSocketSharp::Net::HttpListenerContext> _ctxRegistry; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _ctxRegistrySync; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Func<System::Security::Principal::IIdentity,WebSocketSharp::Net::NetworkCredential> _credFinder; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		WebSocketSharp::Logger* _logger; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerPrefixCollection* _prefixes; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _realm; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::ServerSslConfiguration* _sslConfig; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<WebSocketSharp.Net.HttpListenerAsyncResult>* _waitQueue; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _waitQueueSync; // 0x80 (size: 0x8, flags: 0x1, type: 0x1c)
		WebSocketSharp::Net::AuthenticationSchemes _authSchemes; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		bool _disposed; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		bool _ignoreWriteExceptions; // 0x8d (size: 0x1, flags: 0x1, type: 0x2)
		bool _listening; // 0x8e (size: 0x1, flags: 0x1, type: 0x2)
		bool _reuseAddress; // 0x8f (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x90
}
