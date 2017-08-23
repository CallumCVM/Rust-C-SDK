#pragma once

#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Xml\Schema\XmlSchemaObjectTable.h"
#include "..\System\Xml\Schema\XmlSchemaDerivationMethod.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\XmlAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Xml\XmlNameTable.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchema : public XmlSchemaObject // 0x70
	{
	public:
		System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* groups; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* id; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaObjectCollection* includes; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* items; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* notations; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* schemaTypes; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* targetNamespace; // 0xb8 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlAttribute* unhandledAttributes; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* version; // 0xc8 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* compilationItems; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaForm attributeFormDefault; // 0xe8 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod blockDefault; // 0xec (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaForm elementFormDefault; // 0xf0 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod finalDefault; // 0xf4 (size: 0x4, flags: 0x1, type: 0x11)
		bool missedSubComponents; // 0xf8 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x100
}
