#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Row : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** values; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x18
}
