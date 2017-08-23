#pragma once

#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\System\Version.h"

namespace WebSocketSharp
{
	class HttpBase : public Object // 0x0
	{
	public:
		System::Collections::Specialized::NameValueCollection* _headers; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Version* _version; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* EntityBodyData; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x28
}
