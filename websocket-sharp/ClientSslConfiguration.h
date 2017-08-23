#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509CertificateCollection.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ClientSslConfiguration : public SslConfiguration // 0x28
	{
	public:
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* _certs; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _host; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
