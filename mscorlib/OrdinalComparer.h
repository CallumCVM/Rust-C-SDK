#pragma once

namespace System
{
	class OrdinalComparer : public StringComparer // 0x0
	{
	public:
		bool _ignoreCase; // 0x10 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x18
}
