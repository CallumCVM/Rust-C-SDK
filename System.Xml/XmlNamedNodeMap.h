#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
	class XmlNamedNodeMap : public Object // 0x0
	{
	public:
		System::Xml::XmlNode* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* nodeList; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool readOnly; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
