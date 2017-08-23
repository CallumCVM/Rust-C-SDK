#pragma once

#include "..\System\Net\IPAddress.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class IPHostEntry : public Object // 0x0
	{
	public:
		System::Net::IPAddress* addressList; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** aliases; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* hostName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
