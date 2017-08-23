#pragma once

#include "..\System\Xml\Serialization\XmlMapping.h"
#include "..\System\Xml\Serialization\XmlSerializer\SerializerData.h"

namespace rust 
{
	class GenerationBatch : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlMapping* Maps; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Xml::Serialization::XmlSerializer::SerializerData* Datas; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		bool Done; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
