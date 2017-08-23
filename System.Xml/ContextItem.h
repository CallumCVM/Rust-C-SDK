#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlSpace.h"

namespace rust 
{
	class ContextItem : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* BaseURI; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* XmlLang; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::XmlSpace XmlSpace; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
