#pragma once

#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Security\Cryptography\RandomNumberGenerator.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSAPKCS1KeyExchangeFormatter : public AsymmetricKeyExchangeFormatter // 0x0
	{
	public:
		System::Security::Cryptography::RSA* rsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::RandomNumberGenerator* random; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
