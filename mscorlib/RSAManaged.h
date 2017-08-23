#pragma once

#include "..\Mono\Math\BigInteger.h"
#include "..\Mono\Security\Cryptography\RSAManaged\KeyGeneratedEventHandler.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSAManaged : public RSA // 0x20
	{
	public:
		bool isCRTpossible; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool keyBlinding; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
		bool keypairGenerated; // 0x22 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_disposed; // 0x23 (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Math::BigInteger* d; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* p; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* q; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* dp; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* dq; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* qInv; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* n; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* e; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* KeyGenerated; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x70
}
