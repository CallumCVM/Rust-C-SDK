#pragma once

#include "..\System\Xml\Linq\XName.h"
#include "..\System\Xml\Linq\XAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XElement : public XContainer // 0x60
	{
	public:
		System::Xml::Linq::XName* name; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XAttribute* attr_first; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XAttribute* attr_last; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool explicit_is_empty; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
