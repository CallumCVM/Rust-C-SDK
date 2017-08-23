#pragma once

#include "..\System\Xml\XPath\XPathResultType.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XPFuncImpl : public Object // 0x0
	{
	public:
		System::Xml::XPath::XPathResultType* argTypes; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int minargs; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int maxargs; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::XPath::XPathResultType returnType; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
