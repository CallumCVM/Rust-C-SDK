#pragma once

#include "..\System\Security\Cryptography\ICryptoTransform.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class BlockProcessor : public Object // 0x0
	{
	public:
		System::Security::Cryptography::ICryptoTransform* transform; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* block; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int blockSize; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int blockCount; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
