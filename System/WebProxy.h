#pragma once

#include "..\System\Uri.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Net\ICredentials.h"

namespace System
{
	namespace Net
{
	class WebProxy : public Object // 0x0
	{
	public:
		System::Uri* address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* bypassList; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ICredentials* credentials; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool bypassOnLocal; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool useDefaultCredentials; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
