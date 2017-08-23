#pragma once

#include "..\System\Text\RegularExpressions\MRUList\Node.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class MRUList : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::MRUList::Node* head; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::MRUList::Node* tail; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
