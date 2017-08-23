#pragma once

#include "..\System\Net\HttpListenerRequest.h"
#include "..\System\Net\HttpListenerResponse.h"
#include "..\System\Security\Principal\IPrincipal.h"
#include "..\System\Net\HttpConnection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\HttpListener.h"

namespace System
{
	namespace Net
{
	class HttpListenerContext : public Object // 0x0
	{
	public:
		System::Net::HttpListenerRequest* request; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpListenerResponse* response; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Principal::IPrincipal* user; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpConnection* cnc; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* error; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::HttpListener* Listener; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		int err_status; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
