#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnyAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSimpleContentExtension : public XmlSchemaContent // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaAnyAttribute* any; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* baseTypeName; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xa8
}
