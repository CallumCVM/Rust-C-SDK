#pragma once

#include "..\System\Xml\XPath\XPathNavigator.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class PrecedingIterator : public SimpleIterator // 0x40
	{
	public:
		System::Xml::XPath::XPathNavigator* startPosition; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool finished; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool started; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
