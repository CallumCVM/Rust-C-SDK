#pragma once

namespace ProtoBuf
{
	class ResearchTable : public Object // 0x0
	{
	public:
		float researchTimeLeft; // 0x10 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x14 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x15 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
