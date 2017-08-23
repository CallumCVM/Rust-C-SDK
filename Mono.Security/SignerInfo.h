#pragma once

#include "..\Mono\Security\X509\X509Certificate.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"
#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class SignerInfo : public Object // 0x0
	{
	public:
		Mono::Security::X509::X509Certificate* x509; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* hashAlgorithm; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::AsymmetricAlgorithm* key; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* authenticatedAttributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* unauthenticatedAttributes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* signature; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* issuer; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* serial; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* ski; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char version; // 0x58 (size: 0x1, flags: 0x1, type: 0x5)
	}; // size = 0x60
}
