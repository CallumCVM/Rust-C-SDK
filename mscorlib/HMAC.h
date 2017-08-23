#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\HashAlgorithm.h"
#include "..\Mono\Security\Cryptography\BlockProcessor.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class HMAC : public KeyedHashAlgorithm // 0x30
	{
	public:
		bool _disposed; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* _hashName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::HashAlgorithm* _algo; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Cryptography::BlockProcessor* _block; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int _blockSizeValue; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
