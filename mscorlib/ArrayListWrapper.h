#pragma once

#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class ArrayListWrapper : public ArrayList // 0x28
	{
	public:
		System::Collections::ArrayList* m_InnerArrayList; // 0x28 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x30
}
