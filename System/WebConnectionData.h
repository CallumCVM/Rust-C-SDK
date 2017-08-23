#pragma once

#include "..\System\Net\HttpWebRequest.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Version.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class WebConnectionData : public Object // 0x0
	{
	public:
		System::Net::HttpWebRequest* request; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* StatusDescription; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Net::WebHeaderCollection* Headers; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Version* Version; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::IO::Stream* stream; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Challenge; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		int StatusCode; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
