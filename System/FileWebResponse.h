#pragma once

#include "..\System\Uri.h"
#include "..\System\IO\FileStream.h"
#include "..\System\Net\WebHeaderCollection.h"

namespace System
{
	namespace Net
{
	class FileWebResponse : public WebResponse // 0x18
	{
	public:
		System::Uri* responseUri; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileStream* fileStream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* webHeaders; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 contentLength; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		bool disposed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
