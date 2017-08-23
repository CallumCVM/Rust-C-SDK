#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Column : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* title; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int width; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
