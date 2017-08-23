#pragma once

#include "..\Mono\Xml\Schema\XsdWhitespaceFacet.h"
#include "..\System\Text\StringBuilder.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaDatatype : public Object // 0x0
	{
	public:
		System::Text::StringBuilder* sb; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdWhitespaceFacet WhitespaceValue; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x20
}
