#pragma once

#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSAPKCS1SignatureFormatter : public AsymmetricSignatureFormatter // 0x0
	{
	public:
		System::Security::Cryptography::RSA* rsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::HashAlgorithm* hash; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
