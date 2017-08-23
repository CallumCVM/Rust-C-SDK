#pragma once

#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\System\Text\StringBuilder.h"
#include "..\WebSocketSharp\Net\InputState.h"
#include "..\WebSocketSharp\Net\RequestStream.h"
#include "..\WebSocketSharp\Net\HttpListener.h"
#include "..\WebSocketSharp\Net\LineState.h"
#include "..\WebSocketSharp\Net\EndPointListener.h"
#include "..\WebSocketSharp\Net\ResponseStream.h"
#include "..\WebSocketSharp\Net\HttpListenerPrefix.h"
#include "..\System\IO\MemoryStream.h"
#include "..\System\Net\Sockets\Socket.h"
#include "..\System\IO\Stream.h"
#include "..\System\Object.h"
#include "..\System\Threading\Timer.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpConnection : public Object // 0x0
	{
	public:
		unsigned char* _buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* _currentLine; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::RequestStream* _inputStream; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListener* _lastListener; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::EndPointListener* _listener; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::ResponseStream* _outputStream; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerPrefix* _prefix; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::MemoryStream* _requestBuffer; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::Socket* _socket; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _stream; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _sync; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::Timer* _timer; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool _contextBound; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Net::InputState _inputState; // 0x7c (size: 0x4, flags: 0x1, type: 0x11)
		WebSocketSharp::Net::LineState _lineState; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		int _position; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int _reuses; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		bool _secure; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		int _timeout; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
