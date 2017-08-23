#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XPath\XPathNavigator.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class AncestorOrSelfIterator : public SimpleIterator // 0x40
	{
	public:
		System::Collections::ArrayList* navigators; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* startPosition; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int currentPosition; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
