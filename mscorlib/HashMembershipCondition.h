#pragma once

#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class HashMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Security::Cryptography::HashAlgorithm* hash_algorithm; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* hash_value; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
