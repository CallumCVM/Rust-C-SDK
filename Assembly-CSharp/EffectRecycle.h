#pragma once

namespace rust 
{
	class EffectRecycle : public BaseMonoBehaviour // 0x18
	{
	public:
		float detachTime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float recycleTime; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		PlayMode playMode; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		ParentDestroyBehaviour onParentDestroyed; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
