#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlAttributeAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* attributeName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* dataType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* ns; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaForm form; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
