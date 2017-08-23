#pragma once

#include "..\System\Xml\XPath\NodeSet.h"
#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Xml\XPath\XPathNavigator.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class SimpleSlashIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::NodeSet* _expr; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::BaseIterator* _left; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::BaseIterator* _right; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* _current; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
