#pragma once

namespace System
{
	class CLSCompliantAttribute : public Attribute // 0x0
	{
	public:
		bool is_compliant; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
