#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\ASN1.h"

namespace rust 
{
	class ContentInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* contentType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::ASN1* content; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
