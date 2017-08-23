#pragma once

#include "..\System\Resources\ResourceReader.h"

namespace rust 
{
	class ResourceEnumerator : public Object // 0x0
	{
	public:
		System::Resources::ResourceReader* reader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		bool finished; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
