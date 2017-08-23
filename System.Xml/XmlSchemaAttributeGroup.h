#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnyAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaAttributeGroup.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaObjectTable.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAttributeGroup : public XmlSchemaAnnotated // 0x88
	{
	public:
		System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaAttributeGroup* redefined; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* qualifiedName; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAnyAttribute* anyAttributeUse; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		bool AttributeGroupRecursionCheck; // 0xc0 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0xc8
}
