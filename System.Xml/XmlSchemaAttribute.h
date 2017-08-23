#pragma once

#include "..\System\Object.h"
#include "..\System\Xml\Schema\XmlSchemaSimpleType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaUse.h"
#include "..\System\Xml\Schema\XmlSchemaAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAttribute : public XmlSchemaAnnotated // 0x88
	{
	public:
		System::Object attributeType; // 0x88 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Schema::XmlSchemaSimpleType* attributeSchemaType; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* defaultValue; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fixedValue; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* validatedDefaultValue; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* validatedFixedValue; // 0xb0 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object validatedFixedTypedValue; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* name; // 0xc0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* targetNamespace; // 0xc8 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* qualifiedName; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* refName; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSimpleType* schemaType; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* schemaTypeName; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAttribute* referencedAttribute; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaForm form; // 0xf8 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaUse use; // 0xfc (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaUse validatedUse; // 0x100 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x108
}
