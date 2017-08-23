#pragma once

#include "..\System\Security\Cryptography\RSA.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Security
{
	class StrongName : public Object // 0x0
	{
	public:
		System::Security::Cryptography::RSA* rsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* publicKey; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* keyToken; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* tokenAlgorithm; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
