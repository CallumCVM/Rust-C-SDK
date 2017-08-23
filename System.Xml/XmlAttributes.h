#pragma once

#include "..\System\Xml\Serialization\XmlAnyAttributeAttribute.h"
#include "..\System\Xml\Serialization\XmlAnyElementAttributes.h"
#include "..\System\Xml\Serialization\XmlArrayAttribute.h"
#include "..\System\Xml\Serialization\XmlArrayItemAttributes.h"
#include "..\System\Xml\Serialization\XmlAttributeAttribute.h"
#include "..\System\Xml\Serialization\XmlChoiceIdentifierAttribute.h"
#include "..\System\Object.h"
#include "..\System\Xml\Serialization\XmlElementAttributes.h"
#include "..\System\Xml\Serialization\XmlEnumAttribute.h"
#include "..\System\Xml\Serialization\XmlRootAttribute.h"
#include "..\System\Xml\Serialization\XmlTextAttribute.h"
#include "..\System\Xml\Serialization\XmlTypeAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlAttributes : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlArrayAttribute* xmlArray; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object xmlDefaultValue; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Serialization::XmlElementAttributes* xmlElements; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlEnumAttribute* xmlEnum; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlRootAttribute* xmlRoot; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTextAttribute* xmlText; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeAttribute* xmlType; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool xmlIgnore; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool xmlns; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
