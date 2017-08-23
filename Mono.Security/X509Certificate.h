#pragma once

#include "..\Mono\Security\ASN1.h"
#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Security\Cryptography\DSA.h"
#include "..\Mono\Security\X509\X509ExtensionCollection.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509Certificate : public Object // 0x0
	{
	public:
		Mono::Security::ASN1* decoder; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* m_encodedcert; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::ASN1* issuer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_issuername; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_keyalgo; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* m_keyalgoparams; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::ASN1* subject; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_subject; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* m_publickey; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* signature; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* m_signaturealgo; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* m_signaturealgoparams; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* certhash; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::Cryptography::RSA* _rsa; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DSA* _dsa; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* serialnumber; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* issuerUniqueID; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* subjectUniqueID; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509ExtensionCollection* extensions; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::DateTime m_from; // 0xa8 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime m_until; // 0xb8 (size: 0x10, flags: 0x1, type: 0x11)
		int version; // 0xc8 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xd0
}
