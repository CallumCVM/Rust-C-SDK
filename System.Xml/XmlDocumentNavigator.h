#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\XmlAttribute.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
	class XmlDocumentNavigator : public XPathNavigator // 0x0
	{
	public:
		System::Xml::XmlNode* node; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* nsNode; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* iteratedNsNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
