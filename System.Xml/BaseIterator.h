#pragma once

#include "..\System\Xml\IXmlNamespaceResolver.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class BaseIterator : public XPathNodeIterator // 0x18
	{
	public:
		System::Xml::IXmlNamespaceResolver* _nsm; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int position; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
