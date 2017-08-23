#pragma once

#include "..\System\Xml\Serialization\XmlAttributeEventHandler.h"
#include "..\System\Xml\Serialization\XmlElementEventHandler.h"
#include "..\System\Xml\Serialization\XmlNodeEventHandler.h"
#include "..\System\Xml\Serialization\UnreferencedObjectEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlDeserializationEvents : public ValueType // 0x0
	{
	public:
		System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlElementEventHandler* onUnknownElement; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
