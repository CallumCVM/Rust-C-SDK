#pragma once

namespace rust 
{
	class BaseResourceExtractor : public BaseCombatEntity // 0x1e8
	{
	public:
		bool canExtractLiquid; // 0x1e8 (size: 0x1, flags: 0x6, type: 0x2)
		bool canExtractSolid; // 0x1e9 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x1f0
}
