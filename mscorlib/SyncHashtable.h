#pragma once

#include "..\System\Collections\Hashtable.h"

namespace rust 
{
	class SyncHashtable : public Hashtable // 0x68
	{
	public:
		System::Collections::Hashtable* host; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x70
}
