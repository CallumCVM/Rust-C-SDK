#pragma once

namespace rust 
{
	class LazyAimProperties : public ScriptableObject // 0x18
	{
	public:
		float snapStrength; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float deadzoneAngle; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
