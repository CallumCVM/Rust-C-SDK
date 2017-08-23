#pragma once

#include "..\System\Xml\Serialization\XmlMapping.h"
#include "..\System\Xml\Serialization\SerializationFormat.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSerializationReaderInterpreter : public XmlSerializationReader // 0xd0
	{
	public:
		System::Xml::Serialization::XmlMapping* _typeMap; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SerializationFormat _format; // 0xd8 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xe0
}
