#pragma once

#include "..\System\Security\Cryptography\SHA256.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA256CryptoServiceProvider : public SHA256 // 0x28
	{
	public:
		System::Security::Cryptography::SHA256* hash; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
