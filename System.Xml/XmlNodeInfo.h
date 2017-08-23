#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlSpace.h"

namespace rust 
{
	class XmlNodeInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NS; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* XmlLang; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		bool HasSimple; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool HasElements; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		System::Xml::XmlSpace XmlSpace; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
