#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeMapMemberAttribute : public XmlTypeMapMember // 0x50
	{
	public:
		UnityEngine::UnicodeString* _attributeName; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _namespace; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaForm _form; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
