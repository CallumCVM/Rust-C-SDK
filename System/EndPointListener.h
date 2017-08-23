#pragma once

#include "..\System\Net\IPEndPoint.h"
#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2.h"
#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"

namespace System
{
	namespace Net
{
	class EndPointListener : public Object // 0x0
	{
	public:
		System::Net::IPEndPoint* endpoint; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::Socket* sock; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* prefixes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* unhandled; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* all; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate2* cert; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsymmetricAlgorithm* key; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool secure; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
