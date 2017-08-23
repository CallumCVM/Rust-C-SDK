#pragma once

#include "..\System\Xml\Linq\XNode.h"
#include "..\System\Xml\Linq\XAttribute.h"
#include "..\System\Xml\XmlNameTable.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XNodeNavigator : public XPathNavigator // 0x0
	{
	public:
		System::Xml::Linq::XNode* node; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XAttribute* attr; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* name_table; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
