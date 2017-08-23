#pragma once

#include "..\System\Uri.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Net\CookieCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Version.h"
#include "..\System\Net\HttpStatusCode.h"
#include "..\System\Net\CookieContainer.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class HttpWebResponse : public WebResponse // 0x18
	{
	public:
		System::Uri* uri; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* webHeaders; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::CookieCollection* cookieCollection; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* method; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* version; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* statusDescription; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* contentType; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::CookieContainer* cookie_container; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** cookieExpiresFormats; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::HttpStatusCode statusCode; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 contentLength; // 0x70 (size: 0x8, flags: 0x1, type: 0xa)
		bool disposed; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
