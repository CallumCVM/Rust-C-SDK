#pragma once

#include "..\System\Xml\XmlDocument.h"
#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\ReadState.h"

namespace System
{
	namespace Xml
{
	class XmlNodeReaderImpl : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlDocument* document; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* startNode; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* current; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* ownerLinkedNode; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::ReadState state; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		int depth; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		bool isEndElement; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignoreStartNode; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
