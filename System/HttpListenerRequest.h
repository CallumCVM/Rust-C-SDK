#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Net\CookieCollection.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\IO\Stream.h"
#include "..\System\Version.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\System\Guid.h"
#include "..\System\Uri.h"
#include "..\System\Net\HttpListenerContext.h"

namespace System
{
	namespace Net
{
	class HttpListenerRequest : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** accept_types; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::Encoding* content_encoding; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::CookieCollection* cookies; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* headers; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* method; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::Stream* input_stream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Version* version; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameValueCollection* query_string; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* raw_url; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* url; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* referrer; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** user_languages; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::HttpListenerContext* context; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 content_length; // 0x78 (size: 0x8, flags: 0x1, type: 0xa)
		bool cl_set; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		System::Guid identifier; // 0x84 (size: 0x10, flags: 0x1, type: 0x11)
		bool is_chunked; // 0x94 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x98
}
