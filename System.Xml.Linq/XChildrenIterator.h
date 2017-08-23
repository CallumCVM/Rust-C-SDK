#pragma once

#include "..\System\Xml\Linq\XContainer.h"
#include "..\System\Xml\Linq\XNode.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XChildrenIterator : public Object // 0x0
	{
	public:
		System::Xml::Linq::XContainer* source; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XNode* n; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
