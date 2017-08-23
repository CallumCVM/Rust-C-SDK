#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class XslNumberFormatter : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* firstSep; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* lastSep; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* fmtList; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
