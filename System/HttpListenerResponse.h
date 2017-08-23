#pragma once

#include "..\System\Text\Encoding.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\CookieCollection.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Net\ResponseStream.h"
#include "..\System\Version.h"
#include "..\System\Net\HttpListenerContext.h"

namespace System
{
	namespace Net
{
	class HttpListenerResponse : public Object // 0x0
	{
	public:
		System::Text::Encoding* content_encoding; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* content_type; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::CookieCollection* cookies; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* headers; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ResponseStream* output_stream; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Version* version; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* location; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* status_description; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::HttpListenerContext* context; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool disposed; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 content_length; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		bool cl_set; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool keep_alive; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		int status_code; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool chunked; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool HeadersSent; // 0x71 (size: 0x1, flags: 0x3, type: 0x2)
		bool force_close_chunked; // 0x72 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
