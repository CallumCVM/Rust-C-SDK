#pragma once

#include "..\System\Security\Cryptography\RSA.h"

namespace Mono
{
	namespace Security
{
{
		namespace Authenticode
{
	class PrivateKey : public Object // 0x0
	{
	public:
		System::Security::Cryptography::RSA* rsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool encrypted; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool weak; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		int keyType; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
