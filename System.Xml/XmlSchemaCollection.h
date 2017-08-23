#pragma once

#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaCollection : public Object // 0x0
	{
	public:
		System::Xml::Schema::XmlSchemaSet* schemaSet; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
