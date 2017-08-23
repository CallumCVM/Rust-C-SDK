#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\HttpListener.h"

namespace System
{
	namespace Net
{
	class HttpListenerPrefixCollection : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine::UnicodeString*>* prefixes; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::HttpListener* listener; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
