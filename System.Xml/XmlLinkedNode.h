#pragma once

#include "..\System\Xml\XmlLinkedNode.h"

namespace System
{
	namespace Xml
{
	class XmlLinkedNode : public XmlNode // 0x28
	{
	public:
		System::Xml::XmlLinkedNode* nextSibling; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
