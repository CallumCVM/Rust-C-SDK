#pragma once

#include "..\System\UInt16.h"

namespace System
{
	namespace Net
{
	class IPv6Address : public Object // 0x0
	{
	public:
		System::UInt16* address; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int prefixLength; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 scopeId; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x28
}
