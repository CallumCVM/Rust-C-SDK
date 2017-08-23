#pragma once

#include "..\System\Xml\XPath\XPathNavigator.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class SimpleIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::XPathNavigator* _nav; // 0x28 (size: 0x8, flags: 0x24, type: 0x12)
		System::Xml::XPath::XPathNavigator* _current; // 0x30 (size: 0x8, flags: 0x4, type: 0x12)
		bool skipfirst; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
