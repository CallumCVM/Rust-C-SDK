#pragma once

#include "..\System\Xml\IHasXmlChildNode.h"

namespace System
{
	namespace Xml
{
	class XmlNodeListChildren : public XmlNodeList // 0x0
	{
	public:
		System::Xml::IHasXmlChildNode* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
