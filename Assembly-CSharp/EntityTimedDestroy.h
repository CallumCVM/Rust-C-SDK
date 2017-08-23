#pragma once

namespace rust 
{
	class EntityTimedDestroy : public EntityComponent`1 // 0x20
	{
	public:
		float secondsTillDestroy; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
