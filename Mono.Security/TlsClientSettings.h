#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\X509Certificates\X509CertificateCollection.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate.h"
#include "..\Mono\Security\Cryptography\RSAManaged.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class TlsClientSettings : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* targetHost; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate* clientCertificate; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Cryptography::RSAManaged* certificateRSA; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
