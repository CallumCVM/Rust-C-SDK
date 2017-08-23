#pragma once

#include "..\System\Collections\ICollection.h"

namespace rust 
{
	class StandardValuesCollection : public Object // 0x0
	{
	public:
		System::Collections::ICollection* values; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
