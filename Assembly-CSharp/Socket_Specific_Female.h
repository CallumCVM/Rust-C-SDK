#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Socket_Specific_Female : public Socket_Base // 0xe0
	{
	public:
		UnityEngine::UnicodeString** allowedMaleSockets; // 0xe0 (size: 0x8, flags: 0x6, type: 0x1d)
		int rotationDegrees; // 0xe8 (size: 0x4, flags: 0x6, type: 0x8)
		int rotationOffset; // 0xec (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xf0
}
