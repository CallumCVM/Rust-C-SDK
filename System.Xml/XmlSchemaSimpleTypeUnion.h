#pragma once

#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Object.h"
#include "..\System\Xml\Schema\XmlSchemaSimpleType.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSimpleTypeUnion : public XmlSchemaSimpleTypeContent // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaObjectCollection* baseTypes; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* memberTypes; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object* validatedTypes; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::Schema::XmlSchemaSimpleType* validatedSchemaTypes; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0xb0
}
