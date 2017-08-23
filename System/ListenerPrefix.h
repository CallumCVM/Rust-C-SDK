#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\UInt16.h"
#include "..\System\Net\IPAddress.h"
#include "..\System\Net\HttpListener.h"

namespace System
{
	namespace Net
{
	class ListenerPrefix : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* original; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* host; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::IPAddress* addresses; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::HttpListener* Listener; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::UInt16 port; // 0x38 (size: 0x2, flags: 0x1, type: 0x7)
		bool secure; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
