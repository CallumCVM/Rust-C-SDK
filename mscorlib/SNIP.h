#pragma once

#include "..\System\Security\Permissions\StrongNamePublicKeyBlob.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Version.h"

namespace rust 
{
	class SNIP : public ValueType // 0x0
	{
	public:
		System::Security::Permissions::StrongNamePublicKeyBlob* PublicKey; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Version* AssemblyVersion; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
