#pragma once

#include "..\System\Xml\Serialization\XmlTypeMapMember.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaForm.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlMemberMapping : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlTypeMapMember* _mapMember; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _elementName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _memberName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _namespace; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _typeNamespace; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaForm _form; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
