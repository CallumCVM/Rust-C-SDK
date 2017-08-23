#pragma once

#include "..\System\Security\Cryptography\DESTransform.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class TripleDESTransform : public SymmetricTransform // 0x58
	{
	public:
		System::Security::Cryptography::DESTransform* E1; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DESTransform* D2; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DESTransform* E3; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DESTransform* D1; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DESTransform* E2; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::DESTransform* D3; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x88
}
