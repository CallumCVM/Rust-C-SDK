#pragma once

#include "..\System\Text\Encoding.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\WebSocketSharp\Net\CookieCollection.h"
#include "..\WebSocketSharp\Net\WebHeaderCollection.h"
#include "..\WebSocketSharp\Net\ResponseStream.h"
#include "..\System\Version.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerResponse : public Object // 0x0
	{
	public:
		System::Text::Encoding* _contentEncoding; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _contentType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::CookieCollection* _cookies; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::WebHeaderCollection* _headers; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _location; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Net::ResponseStream* _outputStream; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _statusDescription; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* _version; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool _closeConnection; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _contentLength; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		bool _disposed; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool _headersSent; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		bool _keepAlive; // 0x6a (size: 0x1, flags: 0x1, type: 0x2)
		bool _sendChunked; // 0x6b (size: 0x1, flags: 0x1, type: 0x2)
		int _statusCode; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
