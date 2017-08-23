#pragma once

#include "..\System\Security\Cryptography\MD5.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class MD5Cng : public MD5 // 0x28
	{
	public:
		System::Security::Cryptography::MD5* hash; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
