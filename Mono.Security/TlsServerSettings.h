#pragma once

#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Security\Cryptography\RSAParameters.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\Protocol\Tls\Handshake\ClientCertificateType.h"

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
	class TlsServerSettings : public Object // 0x0
	{
	public:
		Mono::Security::X509::X509CertificateCollection* certificates; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::RSA* certificateRSA; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::RSAParameters rsaParameters; // 0x20 (size: 0x40, flags: 0x1, type: 0x11)
		unsigned char* signedParams; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** distinguisedNames; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::Protocol::Tls::Handshake::ClientCertificateType* certificateTypes; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		bool serverKeyExchange; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool certificateRequest; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
