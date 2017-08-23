#pragma once

#include "..\System\Xml\XmlElement.h"
#include "..\System\Xml\WriteState.h"
#include "..\System\Xml\XmlAttribute.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class XmlDocumentAttributeWriter : public XmlWriter // 0x18
	{
	public:
		System::Xml::XmlElement* element; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* attribute; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::WriteState state; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
