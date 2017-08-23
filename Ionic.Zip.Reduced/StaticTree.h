#pragma once

#include "..\System\Int16.h"

namespace Ionic
{
	namespace Zlib
{
	class StaticTree : public Object // 0x0
	{
	public:
		System::Int16* treeCodes; // 0x10 (size: 0x8, flags: 0x3, type: 0x1d)
		int* extraBits; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
		int extraBase; // 0x20 (size: 0x4, flags: 0x3, type: 0x8)
		int elems; // 0x24 (size: 0x4, flags: 0x3, type: 0x8)
		int maxLength; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x30
}
