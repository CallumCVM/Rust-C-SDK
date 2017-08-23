#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\WriteState.h"
#include "..\System\Xml\XmlAttribute.h"
#include "..\Mono\Xml\XPath\XmlWriterClosedEventHandler.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class XmlDocumentInsertionWriter : public XmlWriter // 0x18
	{
	public:
		System::Xml::XmlNode* parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* current; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* nextSibling; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* attribute; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::XmlWriterClosedEventHandler* Closed; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::WriteState state; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
