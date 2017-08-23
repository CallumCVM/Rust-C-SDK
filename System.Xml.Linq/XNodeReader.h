#pragma once

#include "..\System\Xml\ReadState.h"
#include "..\System\Xml\Linq\XNode.h"
#include "..\System\Xml\NameTable.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XNodeReader : public XmlReader // 0x28
	{
	public:
		System::Xml::Linq::XNode* node; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XNode* start; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::NameTable* name_table; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::ReadState state; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		int attr; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		bool attr_value; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool end_element; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
