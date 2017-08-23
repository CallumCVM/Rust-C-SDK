#pragma once

#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Decimal.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaChoice : public XmlSchemaGroupBase // 0x100
	{
	public:
		System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		System::Decimal minEffectiveTotalRange; // 0x108 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x118
}
