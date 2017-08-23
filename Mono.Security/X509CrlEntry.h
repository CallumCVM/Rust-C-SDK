#pragma once

#include "..\System\DateTime.h"
#include "..\Mono\Security\X509\X509ExtensionCollection.h"

namespace rust 
{
	class X509CrlEntry : public Object // 0x0
	{
	public:
		unsigned char* sn; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509ExtensionCollection* extensions; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::DateTime revocationDate; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
