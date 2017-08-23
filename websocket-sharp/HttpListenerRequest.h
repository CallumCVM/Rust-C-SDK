#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\Encoding.h"
#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\WebSocketSharp\Net\CookieCollection.h"
#include "..\WebSocketSharp\Net\WebHeaderCollection.h"
#include "..\System\Guid.h"
#include "..\System\IO\Stream.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\System\Uri.h"
#include "..\System\Version.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerRequest : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** _acceptTypes; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::Encoding* _contentEncoding; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::CookieCollection* _cookies; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::WebHeaderCollection* _headers; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _inputStream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _method; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::NameValueCollection* _queryString; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* _referer; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _uri; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* _url; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** _userLanguages; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Version* _version; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool _chunked; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _contentLength; // 0x80 (size: 0x8, flags: 0x1, type: 0xa)
		bool _contentLengthSet; // 0x88 (size: 0x1, flags: 0x1, type: 0x2)
		System::Guid _identifier; // 0x8c (size: 0x10, flags: 0x1, type: 0x11)
		bool _keepAlive; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		bool _keepAliveSet; // 0x9d (size: 0x1, flags: 0x1, type: 0x2)
		bool _websocketRequest; // 0x9e (size: 0x1, flags: 0x1, type: 0x2)
		bool _websocketRequestSet; // 0x9f (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa0
}
