#pragma once

#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class HMAC : public KeyedHashAlgorithm // 0x30
	{
	public:
		System::Security::Cryptography::HashAlgorithm* hash; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* innerPad; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* outerPad; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		bool hashing; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
