#pragma once

#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Collections\IComparer.h"
#include "..\System\Xml\XPath\XmlDataType.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class XPathSorter : public Object // 0x0
	{
	public:
		System::Xml::XPath::Expression* _expr; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::IComparer* _cmp; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		System::Xml::XPath::XmlDataType _type; // 0x20 (size: 0x4, flags: 0x21, type: 0x11)
	}; // size = 0x28
}
