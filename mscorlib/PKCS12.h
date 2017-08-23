#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\System\Security\Cryptography\RandomNumberGenerator.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class PKCS12 : public Object // 0x0
	{
	public:
		unsigned char* _password; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* _keyBags; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _secretBags; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509CertificateCollection* _certs; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool _keyBagsChanged; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool _secretBagsChanged; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		bool _certsChanged; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
		int _iterations; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::ArrayList* _safeBags; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
