#pragma once

#include "..\System\Xml\Serialization\XmlSerializationReaderInterpreter.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"

namespace rust 
{
	class ReaderCallbackInfo : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
