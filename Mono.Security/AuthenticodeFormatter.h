#pragma once

#include "..\Mono\Security\Authenticode\Authority.h"
#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\System\Collections\ArrayList.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Uri.h"
#include "..\Mono\Security\ASN1.h"
#include "..\Mono\Security\PKCS7\SignedData.h"

namespace Mono
{
	namespace Security
{
{
		namespace Authenticode
{
	class AuthenticodeFormatter : public AuthenticodeBase // 0x38
	{
	public:
		Mono::Security::X509::X509CertificateCollection* certs; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* crls; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* hash; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::RSA* rsa; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* timestamp; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::ASN1* authenticode; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::PKCS7::SignedData* pkcs7; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* description; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* url; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Authenticode::Authority authority; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x88
}
