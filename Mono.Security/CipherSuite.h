#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\Protocol\Tls\CipherAlgorithmType.h"
#include "..\Mono\Security\Protocol\Tls\HashAlgorithmType.h"
#include "..\Mono\Security\Protocol\Tls\ExchangeAlgorithmType.h"
#include "..\System\Security\Cryptography\CipherMode.h"
#include "..\Mono\Security\Protocol\Tls\Context.h"
#include "..\System\Security\Cryptography\SymmetricAlgorithm.h"
#include "..\System\Security\Cryptography\ICryptoTransform.h"
#include "..\System\Security\Cryptography\KeyedHashAlgorithm.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class CipherSuite : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::Protocol::Tls::Context* context; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::SymmetricAlgorithm* encryptionAlgorithm; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::ICryptoTransform* encryptionCipher; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::SymmetricAlgorithm* decryptionAlgorithm; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::ICryptoTransform* decryptionCipher; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::KeyedHashAlgorithm* clientHMAC; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::KeyedHashAlgorithm* serverHMAC; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Int16 code; // 0x50 (size: 0x2, flags: 0x1, type: 0x6)
		Mono::Security::Protocol::Tls::CipherAlgorithmType cipherAlgorithmType; // 0x54 (size: 0x4, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::HashAlgorithmType hashAlgorithmType; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeAlgorithmType; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
		bool isExportable; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::Cryptography::CipherMode cipherMode; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char keyMaterialSize; // 0x68 (size: 0x1, flags: 0x1, type: 0x5)
		int keyBlockSize; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char expandedKeyMaterialSize; // 0x70 (size: 0x1, flags: 0x1, type: 0x5)
		System::Int16 effectiveKeyBits; // 0x72 (size: 0x2, flags: 0x1, type: 0x6)
		unsigned char ivSize; // 0x74 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char blockSize; // 0x75 (size: 0x1, flags: 0x1, type: 0x5)
	}; // size = 0x78
}
