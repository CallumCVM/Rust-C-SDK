#pragma once

#include "..\System\Xml\XmlNameEntry.h"
#include "..\System\Xml\XmlLinkedNode.h"
#include "..\System\Xml\Schema\IXmlSchemaInfo.h"

namespace System
{
	namespace Xml
{
	class XmlAttribute : public XmlNode // 0x28
	{
	public:
		System::Xml::XmlNameEntry* name; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::IXmlSchemaInfo* schemaInfo; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool isDefault; // 0x40 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x48
}
