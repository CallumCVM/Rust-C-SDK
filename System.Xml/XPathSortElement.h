#pragma once

#include "..\System\Xml\XPath\XPathNavigator.h"
#include "..\System\Object.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class XPathSortElement : public Object // 0x0
	{
	public:
		System::Xml::XPath::XPathNavigator* Navigator; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object* Values; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
