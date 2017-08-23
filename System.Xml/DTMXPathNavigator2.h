#pragma once

#include "..\Mono\Xml\XPath\DTMXPathDocument2.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathNavigator2 : public XPathNavigator // 0x0
	{
	public:
		Mono::Xml::XPath::DTMXPathDocument2* document; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool currentIsNode; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool currentIsAttr; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		int currentNode; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int currentAttr; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int currentNs; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
