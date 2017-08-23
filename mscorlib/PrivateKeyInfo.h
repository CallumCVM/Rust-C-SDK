#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class PrivateKeyInfo : public Object // 0x0
	{
	public:
		int _version; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _algorithm; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _key; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* _list; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
