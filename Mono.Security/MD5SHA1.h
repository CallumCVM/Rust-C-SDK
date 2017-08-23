#pragma once

#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class MD5SHA1 : public HashAlgorithm // 0x28
	{
	public:
		System::Security::Cryptography::HashAlgorithm* md5; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::HashAlgorithm* sha; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool hashing; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
