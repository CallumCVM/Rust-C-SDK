#pragma once

#include "..\System\Xml\Schema\XmlSchema.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAll : public XmlSchemaGroupBase // 0x100
	{
	public:
		System::Xml::Schema::XmlSchema* schema; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		bool emptiable; // 0x110 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x118
}
