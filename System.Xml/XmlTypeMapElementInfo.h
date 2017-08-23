#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Xml\Serialization\XmlTypeMapMember.h"
#include "..\System\Object.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"
#include "..\System\Xml\Serialization\TypeData.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeMapElementInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _elementName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _namespace; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::XmlTypeMapMember* _member; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _choiceValue; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::TypeData* _type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaForm _form; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		bool _isNullable; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		int _nestingLevel; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool _wrappedElement; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
