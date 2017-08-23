#pragma once

#include "..\System\Xml\Serialization\XmlTypeMapping.h"
#include "..\System\Xml\Schema\XmlSchemaComplexType.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace rust 
{
	class MapFixup : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlTypeMapping* Map; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::Schema::XmlSchemaComplexType* SchemaType; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::XmlQualifiedName* TypeName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
