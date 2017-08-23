#pragma once

#include "..\System\Collections\Specialized\NameObjectCollectionBase.h"

namespace rust 
{
	class _KeysEnumerator : public Object // 0x0
	{
	public:
		System::Collections::Specialized::NameObjectCollectionBase* m_collection; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int m_position; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
