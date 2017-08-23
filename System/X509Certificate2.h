#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509ExtensionCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\X509Certificates\PublicKey.h"
#include "..\System\Security\Cryptography\X509Certificates\X500DistinguishedName.h"
#include "..\System\Security\Cryptography\Oid.h"
#include "..\Mono\Security\X509\X509Certificate.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
{
{
			namespace X509Certificates
{
	class X509Certificate2 : public X509Certificate // 0x38
	{
	public:
		System::Security::Cryptography::X509Certificates::X509ExtensionCollection* _extensions; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _name; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _serial; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::X509Certificates::PublicKey* _publicKey; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::Oid* signature_algorithm; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Certificate* _cert; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool _archived; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
