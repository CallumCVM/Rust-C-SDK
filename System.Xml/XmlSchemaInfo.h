#pragma once

#include "..\System\Xml\Schema\XmlSchemaSimpleType.h"
#include "..\System\Xml\Schema\XmlSchemaAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaElement.h"
#include "..\System\Xml\Schema\XmlSchemaType.h"
#include "..\System\Xml\Schema\XmlSchemaValidity.h"
#include "..\System\Xml\Schema\XmlSchemaContentType.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaInfo : public Object // 0x0
	{
	public:
		System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAttribute* attr; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* elem; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaType* type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool isDefault; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool isNil; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Schema::XmlSchemaValidity validity; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaContentType contentType; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
