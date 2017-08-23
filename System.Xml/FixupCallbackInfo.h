#pragma once

#include "..\System\Xml\Serialization\XmlSerializationReaderInterpreter.h"
#include "..\System\Xml\Serialization\ClassMap.h"

namespace rust 
{
	class FixupCallbackInfo : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::ClassMap* _map; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _isValueList; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
