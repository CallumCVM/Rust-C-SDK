#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* handler; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool hasLineInfo; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
