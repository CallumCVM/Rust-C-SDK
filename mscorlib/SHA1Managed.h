#pragma once

#include "..\System\Security\Cryptography\SHA1Internal.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA1Managed : public SHA1 // 0x28
	{
	public:
		System::Security::Cryptography::SHA1Internal* sha; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
