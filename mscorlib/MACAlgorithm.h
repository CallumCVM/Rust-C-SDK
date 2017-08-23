#pragma once

#include "..\System\Security\Cryptography\SymmetricAlgorithm.h"
#include "..\System\Security\Cryptography\ICryptoTransform.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class MACAlgorithm : public Object // 0x0
	{
	public:
		System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::ICryptoTransform* enc; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* block; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int blockSize; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int blockCount; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
