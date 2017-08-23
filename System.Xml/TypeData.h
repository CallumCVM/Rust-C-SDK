#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\SchemaTypes.h"
#include "..\System\Xml\Serialization\TypeData.h"
#include "..\System\Xml\Schema\XmlSchemaPatternFacet.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class TypeData : public Object // 0x0
	{
	public:
		System::Type* type; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* elementName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* listItemType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* typeName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fullTypeName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* csharpName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* csharpFullName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::TypeData* listItemTypeData; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::TypeData* listTypeData; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::TypeData* mappedType; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaPatternFacet* facet; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SchemaTypes sType; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		bool hasPublicConstructor; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		bool nullableOverride; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
