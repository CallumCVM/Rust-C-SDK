#pragma once

namespace System
{
	class __ComObject : public MarshalByRefObject // 0x18
	{
	public:
		__int64 iunknown; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 hash_table; // 0x20 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x28
}
