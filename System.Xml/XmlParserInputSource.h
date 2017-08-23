#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\TextReader.h"

namespace rust 
{
	class XmlParserInputSource : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* BaseURI; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		System::IO::TextReader* reader; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		int state; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		bool isPE; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		int line; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int column; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
