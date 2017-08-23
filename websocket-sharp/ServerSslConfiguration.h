#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ServerSslConfiguration : public SslConfiguration // 0x28
	{
	public:
		System::Security::Cryptography::X509Certificates::X509Certificate2* _cert; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool _clientCertRequired; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
