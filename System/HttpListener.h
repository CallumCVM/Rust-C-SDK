#pragma once

#include "..\System\Net\AuthenticationSchemes.h"
#include "..\System\Net\HttpListenerPrefixCollection.h"
#include "..\System\Net\AuthenticationSchemeSelector.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Net
{
	class HttpListener : public Object // 0x0
	{
	public:
		System::Net::HttpListenerPrefixCollection* prefixes; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::AuthenticationSchemeSelector* auth_selector; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* realm; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Hashtable* registry; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* ctx_queue; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* wait_queue; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::AuthenticationSchemes auth_schemes; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		bool ignore_write_exceptions; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		bool unsafe_ntlm_auth; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
		bool listening; // 0x46 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x47 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
