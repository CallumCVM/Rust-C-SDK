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
	class XmlSerializationWriterInterpreter : public XmlSerializationWriter // 0x48
	{
	public:
		System::Xml::Serialization::XmlMapping* _typeMap; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SerializationFormat _format; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
