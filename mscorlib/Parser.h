#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Parser : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _src; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int _cur; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _length; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		bool formatError; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
