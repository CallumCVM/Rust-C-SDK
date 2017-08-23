#pragma once

#include "..\System\Xml\XmlDocument.h"
#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\XmlAttribute.h"
#include "..\System\Xml\XmlDocumentFragment.h"
#include "..\System\Xml\XmlNodeType.h"

namespace System
{
	namespace Xml
{
	class XmlNodeWriter : public XmlWriter // 0x18
	{
	public:
		System::Xml::XmlDocument* doc; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* current; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* attribute; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDocumentFragment* fragment; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool isClosed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool isDocumentEntity; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlNodeType state; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
