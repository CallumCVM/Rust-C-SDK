#pragma once

#include "..\System\Security\Cryptography\SymmetricAlgorithm.h"
#include "..\System\Security\Cryptography\RandomNumberGenerator.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class SymmetricTransform : public Object // 0x0
	{
	public:
		System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		bool encrypt; // 0x18 (size: 0x1, flags: 0x4, type: 0x2)
		int BlockSizeByte; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* temp; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* temp2; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* workBuff; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* workout; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		int FeedBackByte; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int FeedBackIter; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_disposed; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool lastBlock; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
