#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnyAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaParticle.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaComplexContentExtension : public XmlSchemaContent // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaAnyAttribute* any; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* baseTypeName; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaParticle* particle; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb0
}
