#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Socket_Specific : public Socket_Base // 0xe0
	{
	public:
		UnityEngine::UnicodeString* targetSocketName; // 0xe0 (size: 0x8, flags: 0x6, type: 0xe)
		bool useFemaleRotation; // 0xe8 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xf0
}
