#pragma once

#include "..\Mono\Xml\EntityResolvingXmlReader.h"
#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlParserContext.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Xml\EntityHandling.h"

namespace Mono
{
	namespace Xml
{
	class EntityResolvingXmlReader : public XmlReader // 0x28
	{
	public:
		Mono::Xml::EntityResolvingXmlReader* entity; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* source; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlParserContext* context; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::EntityHandling entity_handling; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		bool entity_inside_attr; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool inside_attr; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
		bool do_resolve; // 0x4e (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
