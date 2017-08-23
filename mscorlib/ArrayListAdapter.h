#pragma once

#include "..\System\Collections\IList.h"

namespace rust 
{
	class ArrayListAdapter : public ArrayList // 0x28
	{
	public:
		System::Collections::IList* m_Adaptee; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
