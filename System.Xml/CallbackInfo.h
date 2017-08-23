#pragma once

#include "..\System\Xml\Serialization\XmlSerializationWriterInterpreter.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"

namespace rust 
{
	class CallbackInfo : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
