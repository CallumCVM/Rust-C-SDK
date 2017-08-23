#pragma once

#include "..\System\Text\RegularExpressions\MatchCollection.h"

namespace rust 
{
	class Enumerator : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::MatchCollection* coll; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
