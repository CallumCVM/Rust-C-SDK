#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Newtonsoft\Json\Utilities\PropertyNameTable\Entry.h"

namespace rust 
{
	class Entry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Value; // 0x10 (size: 0x8, flags: 0x23, type: 0xe)
		Newtonsoft::Json::Utilities::PropertyNameTable::Entry* Next; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		int HashCode; // 0x20 (size: 0x4, flags: 0x23, type: 0x8)
	}; // size = 0x28
}
