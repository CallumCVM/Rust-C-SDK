#pragma once

#include "..\System\Xml\Schema\XmlSchemaObjectTable.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaRedefine : public XmlSchemaExternal // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* groups; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* items; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* schemaTypes; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb0
}
