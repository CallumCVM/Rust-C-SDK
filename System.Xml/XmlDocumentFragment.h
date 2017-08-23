#pragma once

#include "..\System\Xml\XmlLinkedNode.h"

namespace System
{
	namespace Xml
{
	class XmlDocumentFragment : public XmlNode // 0x28
	{
	public:
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
