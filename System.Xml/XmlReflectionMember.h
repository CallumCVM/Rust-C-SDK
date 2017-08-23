#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Xml\Serialization\SoapAttributes.h"
#include "..\System\Xml\Serialization\XmlAttributes.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlReflectionMember : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* memberName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* memberType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SoapAttributes* soapAttributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlAttributes* xmlAttributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* declaringType; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool isReturnValue; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool overrideIsNullable; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
