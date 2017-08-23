#pragma once

#include "..\System\Security\Cryptography\KeySizes.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class AsymmetricAlgorithm : public Object // 0x0
	{
	public:
		int KeySizeValue; // 0x10 (size: 0x4, flags: 0x4, type: 0x8)
		System::Security::Cryptography::KeySizes* LegalKeySizesValue; // 0x18 (size: 0x8, flags: 0x4, type: 0x1d)
	}; // size = 0x20
}
