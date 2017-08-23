#pragma once

#include "..\System\Xml\Schema\XmlSchemaDerivationMethod.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Xml\Schema\XmlSchemaType.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchema.h"
#include "..\System\Xml\Schema\XmlSchemaElement.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaElement : public XmlSchemaParticle // 0xf8
	{
	public:
		System::Xml::Schema::XmlSchemaObjectCollection* constraints; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* defaultValue; // 0x100 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object elementType; // 0x108 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Schema::XmlSchemaType* elementSchemaType; // 0x110 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fixedValue; // 0x118 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x120 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* refName; // 0x128 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaType* schemaType; // 0x130 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* schemaTypeName; // 0x138 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* substitutionGroup; // 0x140 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchema* schema; // 0x148 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* qName; // 0x150 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* referencedElement; // 0x158 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* substitutingElements; // 0x160 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* substitutionGroupElement; // 0x168 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* validatedDefaultValue; // 0x170 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* validatedFixedValue; // 0x178 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaDerivationMethod block; // 0x180 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod final; // 0x184 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaForm form; // 0x188 (size: 0x4, flags: 0x1, type: 0x11)
		bool isAbstract; // 0x18c (size: 0x1, flags: 0x1, type: 0x2)
		bool isNillable; // 0x18d (size: 0x1, flags: 0x1, type: 0x2)
		bool parentIsSchema; // 0x18e (size: 0x1, flags: 0x3, type: 0x2)
		System::Xml::Schema::XmlSchemaDerivationMethod blockResolved; // 0x190 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod finalResolved; // 0x194 (size: 0x4, flags: 0x1, type: 0x11)
		bool actualIsAbstract; // 0x198 (size: 0x1, flags: 0x1, type: 0x2)
		bool actualIsNillable; // 0x199 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x1a0
}
