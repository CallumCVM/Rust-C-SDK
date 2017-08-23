#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\TransportType.h"
#include "..\System\Net\IPAddress.h"

namespace System
{
	namespace Net
{
	class EndpointPermission : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* hostname; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::IPAddress* addresses; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int port; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::TransportType transport; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
		bool resolved; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasWildcard; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
