#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class XMLError : public Exception // 0x60
	{
	public:
		UnityEngine::UnicodeString* descr; // 0x60 (size: 0x8, flags: 0x4, type: 0xe)
		int line; // 0x68 (size: 0x4, flags: 0x4, type: 0x8)
		int column; // 0x6c (size: 0x4, flags: 0x4, type: 0x8)
	}; // size = 0x70
}
