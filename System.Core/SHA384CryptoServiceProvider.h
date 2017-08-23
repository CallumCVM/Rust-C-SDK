#pragma once

#include "..\System\Security\Cryptography\SHA384.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA384CryptoServiceProvider : public SHA384 // 0x28
	{
	public:
		System::Security::Cryptography::SHA384* hash; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
