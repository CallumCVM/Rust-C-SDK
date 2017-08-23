#pragma once

#include "..\System\Xml\Linq\XContainer.h"
#include "..\System\Xml\Linq\XAttribute.h"
#include "..\System\Xml\XmlNodeType.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XNodeWriter : public XmlWriter // 0x18
	{
	public:
		System::Xml::Linq::XContainer* root; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XContainer* current; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XAttribute* attribute; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_closed; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlNodeType state; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
