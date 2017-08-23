#pragma once

#include "..\System\Collections\Hashtable.h"

namespace rust 
{
	class CryptoHandler : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* algorithms; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* oid; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* names; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* classnames; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int level; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
