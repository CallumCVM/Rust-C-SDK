#pragma once

#include "..\System\Xml\Schema\XmlSchemaDerivationMethod.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaType.h"
#include "..\System\Xml\Schema\XmlSchemaDatatype.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaType : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* name; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* BaseSchemaTypeName; // 0x90 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::XmlSchemaType* BaseXmlSchemaTypeInternal; // 0x98 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::XmlSchemaDatatype* DatatypeInternal; // 0xa0 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::XmlQualifiedName* QNameInternal; // 0xa8 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::XmlSchemaDerivationMethod final; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		bool isMixed; // 0xb4 (size: 0x1, flags: 0x1, type: 0x2)
		bool recursed; // 0xb5 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Schema::XmlSchemaDerivationMethod resolvedDerivedBy; // 0xb8 (size: 0x4, flags: 0x3, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod finalResolved; // 0xbc (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0xc0
}
