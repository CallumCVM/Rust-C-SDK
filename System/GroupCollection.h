#pragma once

#include "..\System\Text\RegularExpressions\Group.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class GroupCollection : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::Group* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int gap; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
