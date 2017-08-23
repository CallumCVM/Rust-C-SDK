#pragma once

#include "..\System\Object.h"
#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class ArrayListEnumerator : public Object // 0x0
	{
	public:
		int m_Pos; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Index; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		System::Object m_Current; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Collections::ArrayList* m_List; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int m_ExpectedStateChanges; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
