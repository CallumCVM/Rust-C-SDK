#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Type.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlArrayItemAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* dataType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* elementName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaForm form; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool isNullable; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		bool isNullableSpecified; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
		int nestingLevel; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
