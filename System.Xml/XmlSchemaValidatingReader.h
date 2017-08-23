#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\Schema\XmlSchemaValidationFlags.h"
#include "..\System\Xml\Schema\XmlSchemaValidator.h"
#include "..\System\Xml\Schema\XmlValueGetter.h"
#include "..\System\Xml\Schema\XmlSchemaInfo.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\System\Xml\ValidationType.h"
#include "..\System\Xml\IXmlNamespaceResolver.h"
#include "..\System\Xml\Schema\XmlSchemaAttribute.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Schema\XmlSchemaType.h"
#include "..\System\Xml\Schema\XmlSchemaElement.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaValidatingReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaValidator* v; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlValueGetter* getter; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaInfo* xsinfo; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* readerLineInfo; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlNamespaceResolver* nsResolver; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAttribute* defaultAttributes; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* defaultAttributesCache; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaType* currentAttrType; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* element; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaValidationFlags options; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::ValidationType validationType; // 0x7c (size: 0x4, flags: 0x1, type: 0x11)
		int currentDefaultAttribute; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		bool defaultAttributeConsumed; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		bool validationDone; // 0x85 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
