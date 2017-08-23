#pragma once

#include "..\System\Xml\EntityHandling.h"
#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlTextReader.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Xml\ValidationType.h"
#include "..\System\Xml\Schema\XmlSchemaCollection.h"
#include "..\Mono\Xml\DTDValidatingReader.h"
#include "..\Mono\Xml\IHasXmlSchemaInfo.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
	class XmlValidatingReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* sourceReader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlTextReader* xmlTextReader; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* validatingReader; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaCollection* schemas; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDValidatingReader* dtdReader; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::IHasXmlSchemaInfo* schemaInfo; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* storedCharacters; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::EntityHandling entityHandling; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		bool resolverSpecified; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::ValidationType validationType; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x80
}
