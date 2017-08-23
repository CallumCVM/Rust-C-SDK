#pragma once

#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Xml\XPath\XPathResultType.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class PredicateIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::BaseIterator* _iter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::Expression* _pred; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathResultType resType; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		bool finished; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
