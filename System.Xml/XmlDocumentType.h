#pragma once

#include "..\System\Xml\XmlNamedNodeMap.h"
#include "..\Mono\Xml\DTDObjectModel.h"

namespace System
{
	namespace Xml
{
	class XmlDocumentType : public XmlLinkedNode // 0x30
	{
	public:
		System::Xml::XmlNamedNodeMap* entities; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::XmlNamedNodeMap* notations; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		Mono::Xml::DTDObjectModel* dtd; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
