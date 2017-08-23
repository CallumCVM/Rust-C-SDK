#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class UriParser : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* scheme_name; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		int default_port; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
