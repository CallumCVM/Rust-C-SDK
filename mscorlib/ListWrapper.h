#pragma once

#include "..\System\Collections\IList.h"

namespace rust 
{
	class ListWrapper : public Object // 0x0
	{
	public:
		System::Collections::IList* m_InnerList; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x18
}
