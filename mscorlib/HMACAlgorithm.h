#pragma once

#include "..\System\Security\Cryptography\HashAlgorithm.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\Cryptography\BlockProcessor.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class HMACAlgorithm : public Object // 0x0
	{
	public:
		unsigned char* key; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* hash; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::Cryptography::HashAlgorithm* algo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* hashName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::Cryptography::BlockProcessor* block; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
