#pragma once

namespace System
{
	class SRDescriptionAttribute : public DescriptionAttribute // 0x18
	{
	public:
		bool isReplaced; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
