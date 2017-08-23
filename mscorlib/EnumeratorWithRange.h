#pragma once

#include "..\System\Collections\IEnumerator.h"

namespace rust 
{
	class EnumeratorWithRange : public Object // 0x0
	{
	public:
		int m_StartIndex; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Count; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_MaxCount; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::IEnumerator* m_Enumerator; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
