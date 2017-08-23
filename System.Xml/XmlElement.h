#pragma once

#include "..\System\Xml\XmlAttributeCollection.h"
#include "..\System\Xml\XmlNameEntry.h"
#include "..\System\Xml\XmlLinkedNode.h"
#include "..\System\Xml\Schema\IXmlSchemaInfo.h"

namespace System
{
	namespace Xml
{
	class XmlElement : public XmlLinkedNode // 0x30
	{
	public:
		System::Xml::XmlAttributeCollection* attributes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameEntry* name; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::IXmlSchemaInfo* schemaInfo; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool isNotEmpty; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
