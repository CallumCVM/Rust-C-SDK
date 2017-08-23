#pragma once

#include "..\System\Xml\Serialization\HookType.h"
#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\XmlMappingAccess.h"

namespace rust 
{
	class HookInfo : public Object // 0x0
	{
	public:
		System::Type* Type; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Member; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::Serialization::HookType HookType; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		System::Xml::Serialization::XmlMappingAccess Direction; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
