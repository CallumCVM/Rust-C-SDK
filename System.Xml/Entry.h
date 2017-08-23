#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\NameTable\Entry.h"

namespace rust 
{
	class Entry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* str; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::NameTable::Entry* next; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int hash; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int len; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
