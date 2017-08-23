#pragma once

#include "..\System\DateTime.h"
#include "..\System\Security\Cryptography\HashAlgorithm.h"
#include "..\System\Net\DigestHeaderParser.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class DigestSession : public Object // 0x0
	{
	public:
		System::Security::Cryptography::HashAlgorithm* hash; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::DigestHeaderParser* parser; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _cnonce; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::DateTime lastUse; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		int _nc; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
