#pragma once

#include "..\System\Xml\Serialization\XmlMapping.h"
#include "..\System\Xml\Serialization\XmlSerializer\SerializerData.h"
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
	class XmlSerializer : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlMapping* typeMapping; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlSerializer::SerializerData* serializerData; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlElementEventHandler* onUnknownElement; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool customSerializer; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
