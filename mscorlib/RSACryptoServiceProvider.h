#pragma once

#include "..\Mono\Security\Cryptography\KeyPairPersistence.h"
#include "..\Mono\Security\Cryptography\RSAManaged.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSACryptoServiceProvider : public RSA // 0x20
	{
	public:
		Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool persistKey; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool persisted; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		bool privateKeyExportable; // 0x2a (size: 0x1, flags: 0x1, type: 0x2)
		bool m_disposed; // 0x2b (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Security::Cryptography::RSAManaged* rsa; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
