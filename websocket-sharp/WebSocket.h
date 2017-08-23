#pragma once

#include "..\WebSocketSharp\Net\AuthenticationChallenge.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Action.h"
#include "..\WebSocketSharp\CompressionMethod.h"
#include "..\WebSocketSharp\Net\WebSockets\WebSocketContext.h"
#include "..\WebSocketSharp\Net\CookieCollection.h"
#include "..\WebSocketSharp\Net\NetworkCredential.h"
#include "..\System\Threading\AutoResetEvent.h"
#include "..\WebSocketSharp\Opcode.h"
#include "..\System\Object.h"
#include "..\System\IO\MemoryStream.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\System\Collections\Generic\Queue<WebSocketSharp\MessageEventArgs>.h"
#include "..\System\Uri.h"
#include "..\WebSocketSharp\WebSocketState.h"
#include "..\WebSocketSharp\Net\ClientSslConfiguration.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\Sockets\TcpClient.h"
#include "..\System\TimeSpan.h"
#include "..\System\EventHandler<WebSocketSharp\CloseEventArgs>.h"
#include "..\System\EventHandler<WebSocketSharp\ErrorEventArgs>.h"
#include "..\System\EventHandler<WebSocketSharp\MessageEventArgs>.h"
#include "..\System\EventHandler.h"

namespace WebSocketSharp
{
	class WebSocket : public Object // 0x0
	{
	public:
		WebSocketSharp::Net::AuthenticationChallenge* _authChallenge; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _base64Key; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Action* _closeContext; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::WebSockets::WebSocketContext* _context; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::CookieCollection* _cookies; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::NetworkCredential* _credentials; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _extensions; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Threading::AutoResetEvent* _exitReceiving; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _forConn; // 0x50 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _forEvent; // 0x58 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _forMessageEventQueue; // 0x60 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _forSend; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
		System::IO::MemoryStream* _fragmentsBuffer; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System.Func<WebSocketSharp.Net.WebSockets.WebSocketContext,UnityEngine::UnicodeString*> _handshakeRequestChecker; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		WebSocketSharp::Logger* _logger; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Queue<WebSocketSharp::MessageEventArgs> _messageEventQueue; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _origin; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _protocol; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** _protocols; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		WebSocketSharp::Net::NetworkCredential* _proxyCredentials; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* _proxyUri; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::AutoResetEvent* _receivePong; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::ClientSslConfiguration* _sslConfig; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _stream; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::TcpClient* _tcpClient; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* _uri; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler<WebSocketSharp::CloseEventArgs> OnClose; // 0xe0 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::ErrorEventArgs> OnError; // 0xe8 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<WebSocketSharp::MessageEventArgs> OnMessage; // 0xf0 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler* OnOpen; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		bool _client; // 0x100 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::CompressionMethod _compression; // 0x101 (size: 0x1, flags: 0x1, type: 0x11)
		bool _emitOnPing; // 0x102 (size: 0x1, flags: 0x1, type: 0x2)
		bool _enableRedirection; // 0x103 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Opcode _fopcode; // 0x104 (size: 0x1, flags: 0x1, type: 0x11)
		bool _ignoreExtensions; // 0x105 (size: 0x1, flags: 0x1, type: 0x2)
		bool _inContinuation; // 0x106 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int _nonceCount; // 0x108 (size: 0x4, flags: 0x1, type: 0x9)
		bool _preAuth; // 0x10c (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::WebSocketState _readyState; // 0x10e (size: 0x2, flags: 0x1, type: 0x11)
		bool _secure; // 0x110 (size: 0x1, flags: 0x1, type: 0x2)
		System::TimeSpan _waitTime; // 0x118 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x120
}
