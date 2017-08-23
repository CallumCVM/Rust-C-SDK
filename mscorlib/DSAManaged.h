#pragma once

#include "..\Mono\Math\BigInteger.h"
#include "..\System\Security\Cryptography\RandomNumberGenerator.h"
#include "..\Mono\Security\Cryptography\DSAManaged\KeyGeneratedEventHandler.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class DSAManaged : public DSA // 0x20
	{
	public:
		bool keypairGenerated; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Math::BigInteger* p; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* q; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* g; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* x; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* y; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* j; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* seed; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		int counter; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		bool j_missing; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::Cryptography::RandomNumberGenerator* rng; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* KeyGenerated; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
