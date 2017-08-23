#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\StringBuilder.h"

namespace rust 
{
	class XmlAttributeTokenInfo : public XmlTokenInfo // 0x58
	{
	public:
		UnityEngine::UnicodeString* valueCache; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::StringBuilder* tmpBuilder; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		int ValueTokenStartIndex; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		int ValueTokenEndIndex; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x70
}
