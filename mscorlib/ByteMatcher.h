#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	class ByteMatcher : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* map; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* starts; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
