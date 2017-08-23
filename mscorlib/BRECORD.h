#pragma once

namespace System
{
	class BRECORD : public ValueType // 0x0
	{
	public:
		__int64 pvRecord; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 pRecInfo; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x20
}
