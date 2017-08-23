#pragma once

#include "..\System\Collections\IEnumerator.h"

namespace rust 
{
	class EvidenceEnumerator : public Object // 0x0
	{
	public:
		System::Collections::IEnumerator* currentEnum; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEnumerator* hostEnum; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEnumerator* assemblyEnum; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
