#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\Mono\Security\ASN1.h"
#include "..\System\DateTime.h"
#include "..\Mono\Security\X509\X509Certificate.h"
#include "..\Mono\Security\X509\X509Chain.h"

namespace Mono
{
	namespace Security
{
{
		namespace Authenticode
{
	class AuthenticodeDeformatter : public AuthenticodeBase // 0x38
	{
	public:
		UnityEngine::UnicodeString* filename; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* hash; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509CertificateCollection* coll; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::ASN1* signedHash; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Certificate* signingCertificate; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* entry; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509Chain* signerChain; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Chain* timestampChain; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::DateTime timestamp; // 0x78 (size: 0x10, flags: 0x1, type: 0x11)
		int reason; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		bool trustedRoot; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		bool trustedTimestampRoot; // 0x8d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x90
}
