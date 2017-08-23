#pragma once

#include "..\System\Xml\Schema\XmlSchemaContent.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaComplexContent : public XmlSchemaContentModel // 0x88
	{
	public:
		System::Xml::Schema::XmlSchemaContent* content; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		bool isMixed; // 0x90 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x98
}
