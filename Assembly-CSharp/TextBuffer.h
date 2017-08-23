#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\StringBuilder.h"

namespace rust 
{
	class TextBuffer : public Object // 0x0
	{
	public:
		System.Collections.Generic.Queue<UnityEngine::UnicodeString*> buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Text::StringBuilder* builder; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* text; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool dirty; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int curlines; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int maxlines; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int curchars; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int maxchars; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
