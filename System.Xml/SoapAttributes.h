#pragma once

#include "..\System\Xml\Serialization\SoapAttributeAttribute.h"
#include "..\System\Object.h"
#include "..\System\Xml\Serialization\SoapElementAttribute.h"
#include "..\System\Xml\Serialization\SoapEnumAttribute.h"
#include "..\System\Xml\Serialization\SoapTypeAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SoapAttributes : public Object // 0x0
	{
	public:
		System::Xml::Serialization::SoapAttributeAttribute* soapAttribute; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object soapDefaultValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Serialization::SoapElementAttribute* soapElement; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SoapEnumAttribute* soapEnum; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SoapTypeAttribute* soapType; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool soapIgnore; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
