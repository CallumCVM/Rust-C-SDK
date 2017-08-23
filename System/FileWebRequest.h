#pragma once

#include "..\System\Uri.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Net\ICredentials.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\FileAccess.h"
#include "..\System\Net\IWebProxy.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\FileWebResponse.h"
#include "..\System\Threading\AutoResetEvent.h"

namespace System
{
	namespace Net
{
	class FileWebRequest : public WebRequest // 0x20
	{
	public:
		System::Uri* uri; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* webHeaders; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ICredentials* credentials; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* connectionGroup; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* method; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::IWebProxy* proxy; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* requestStream; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::FileWebResponse* webResponse; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::AutoResetEvent* requestEndEvent; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 contentLength; // 0x68 (size: 0x8, flags: 0x1, type: 0xa)
		System::IO::FileAccess fileAccess; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		bool preAuthenticate; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		int timeout; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		bool requesting; // 0x7c (size: 0x1, flags: 0x1, type: 0x2)
		bool asyncResponding; // 0x7d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
