#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\XmlSerializationWriteCallback.h"

namespace rust 
{
	class WriteCallbackInfo : public Object // 0x0
	{
	public:
		System::Type* Type; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* TypeName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* TypeNs; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::Serialization::XmlSerializationWriteCallback* Callback; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
