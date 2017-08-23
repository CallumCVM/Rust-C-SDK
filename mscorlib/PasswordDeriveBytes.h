#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class PasswordDeriveBytes : public DeriveBytes // 0x0
	{
	public:
		UnityEngine::UnicodeString* HashNameValue; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* SaltValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int IterationsValue; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::Security::Cryptography::HashAlgorithm* hash; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int state; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* password; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* initial; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* output; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int position; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int hashnumber; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
