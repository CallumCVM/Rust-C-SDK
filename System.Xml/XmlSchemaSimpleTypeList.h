#pragma once

#include "..\System\Xml\Schema\XmlSchemaSimpleType.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Object.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSimpleTypeList : public XmlSchemaSimpleTypeContent // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaSimpleType* itemType; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* itemTypeName; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object validatedListItemType; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Schema::XmlSchemaSimpleType* validatedListItemSchemaType; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb0
}
