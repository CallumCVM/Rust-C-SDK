#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\RSA.h"

namespace System
{
	namespace Reflection
{
	class StrongNameKeyPair : public Object // 0x0
	{
	public:
		unsigned char* _publicKey; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _keyPairContainer; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool _keyPairExported; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* _keyPairArray; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::Cryptography::RSA* _rsa; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x38
}
