#pragma once

#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class OrderedIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::BaseIterator* iter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* list; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
