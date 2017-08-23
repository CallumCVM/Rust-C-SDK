#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"
#include "..\Mono\Security\X509\X509ExtensionCollection.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509CertificateBuilder : public X509Builder // 0x18
	{
	public:
		unsigned char* sn; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* issuer; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* subject; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::AsymmetricAlgorithm* aa; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* issuerUniqueID; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* subjectUniqueID; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509ExtensionCollection* extensions; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char version; // 0x50 (size: 0x1, flags: 0x1, type: 0x5)
		System::DateTime notBefore; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime notAfter; // 0x68 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
