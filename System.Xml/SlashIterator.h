#pragma once

#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Xml\XPath\NodeSet.h"
#include "..\System\Collections\SortedList.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class SlashIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::BaseIterator* _iterLeft; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::BaseIterator* _iterRight; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::NodeSet* _expr; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::SortedList* _iterList; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::BaseIterator* _nextIterRight; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool _finished; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
