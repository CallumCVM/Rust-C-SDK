#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Uri.h"
#include "..\System\Net\FtpStatusCode.h"
#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\FtpWebRequest.h"

namespace System
{
	namespace Net
{
	class FtpWebResponse : public WebResponse // 0x18
	{
	public:
		System::IO::Stream* stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* uri; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* bannerMessage; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* welcomeMessage; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* exitMessage; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* statusDescription; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* method; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::FtpWebRequest* request; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::FtpStatusCode statusCode; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		System::DateTime lastModified; // 0x60 (size: 0x10, flags: 0x1, type: 0x11)
		bool disposed; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 contentLength; // 0x78 (size: 0x8, flags: 0x3, type: 0xa)
	}; // size = 0x80
}
