#pragma once

#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Xml\XPath\XPathNavigator.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class UnionIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::BaseIterator* _left; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::BaseIterator* _right; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* _current; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool keepLeft; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool keepRight; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
