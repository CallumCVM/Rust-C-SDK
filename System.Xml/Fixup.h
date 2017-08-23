#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\XmlSerializationFixupCallback.h"

namespace rust 
{
	class Fixup : public Object // 0x0
	{
	public:
		System::Object source; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString** ids; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::Serialization::XmlSerializationFixupCallback* callback; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
