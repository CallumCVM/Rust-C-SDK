#pragma once

#include "..\System\Text\RegularExpressions\Match.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class MatchCollection : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::Match* current; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
