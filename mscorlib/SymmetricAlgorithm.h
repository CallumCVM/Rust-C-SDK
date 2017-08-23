#pragma once

#include "..\System\Security\Cryptography\KeySizes.h"
#include "..\System\Security\Cryptography\CipherMode.h"
#include "..\System\Security\Cryptography\PaddingMode.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SymmetricAlgorithm : public Object // 0x0
	{
	public:
		int BlockSizeValue; // 0x10 (size: 0x4, flags: 0x4, type: 0x8)
		unsigned char* IVValue; // 0x18 (size: 0x8, flags: 0x4, type: 0x1d)
		int KeySizeValue; // 0x20 (size: 0x4, flags: 0x4, type: 0x8)
		unsigned char* KeyValue; // 0x28 (size: 0x8, flags: 0x4, type: 0x1d)
		System::Security::Cryptography::KeySizes* LegalBlockSizesValue; // 0x30 (size: 0x8, flags: 0x4, type: 0x1d)
		System::Security::Cryptography::KeySizes* LegalKeySizesValue; // 0x38 (size: 0x8, flags: 0x4, type: 0x1d)
		int FeedbackSizeValue; // 0x40 (size: 0x4, flags: 0x4, type: 0x8)
		System::Security::Cryptography::CipherMode ModeValue; // 0x44 (size: 0x4, flags: 0x4, type: 0x11)
		System::Security::Cryptography::PaddingMode PaddingValue; // 0x48 (size: 0x4, flags: 0x4, type: 0x11)
		bool m_disposed; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
