#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\RegexOptions.h"

namespace rust 
{
	class Key : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* pattern; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Text::RegularExpressions::RegexOptions options; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
